/*
	Name: ̰�� -- A1033 To Fill or not to fill 
	Copyright: �㷨�ʼ� 
	Author: macs
	Date: 12/10/18 18:53
	Description: ���������������������о��룬����ÿ��λ������ʻ���룬����;����վ������
	Ȼ��ֱ������վ�ͼۺ;��뵱ǰ���о��룬���;��������Ǯ�����ﲻ�˾͸��������ʻ���롣 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 510;
const int max_price = 100000;
struct station{
	double P,D;
}s[maxn];
bool cmp(station a,station b){
	return a.D < b.D;
}
int main()
{
	int n;
	double cp = 0.0,c,d,davg;
	scanf("%lf%lf%lf%d",&c,&d,&davg,&n);
	for(int i = 0; i < n; i++){
		scanf("%lf%lf",&s[i].P,&s[i].D);
	}
	s[n].P = 0;
	s[n].D = d;		//�յ� 
	//�Ƚ���վ���������� 
	sort(s, s + n, cmp);
	if(s[0].D != 0){
		printf("The maximum travel distance = 0.00\n");
		return 0;
	}
	int now = 0;
	double ans = 0,gas = 0,max = c*davg;
	while(now < n){
		int k = -1;
		double pmin = max_price;
		for(int i = now + 1; i <= n && s[i].D - s[now].D <= max; i++){
			if(s[i].P < pmin){			//Ѱ���ھ������ͼ���͵���վ 
				pmin = s[i].P;
				k = i;
				if(pmin < s[now].P)
					break;
			}
		}
		if(k == -1)				//����������Ҳ���վ 
			break;
		double need_gas = (s[k].D - s[now].D) / davg;
		if(pmin < s[now].P){    //���Ҫ�����վ�ͼ�С�ڵ�ǰ�ͼۣ�ֻ��ӵ�����һվ�������� 
			if(gas < need_gas){
				ans += (need_gas - gas) * s[now].P;
				gas = 0;       //������һվʱ��������Ϊ�� 
			}else
				gas -= need_gas;
		}else{
			ans += (c - gas) * s[now].P; //��������վ�ͼ۴��ڵ�ǰ�ͼۣ����������� 
			gas = c - need_gas;
		}
		now = k;
	}
	if(now == n){
		printf("%.2lf\n",ans);
	}else
		printf("The maximum travel distance = %.2lf\n",s[now].D + max);
	return 0;
}

