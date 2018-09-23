/*
	Name: 贪心 -- A1033 To Fill or not to fill 
	Copyright: 算法笔记 
	Author: macs
	Date: 12/10/18 18:53
	Description: 给定油箱容量，所到城市距离，汽车每单位油量行驶距离，和中途的油站数量，
	然后分别给出油站油价和距离当前城市距离，求出途中最少油钱？到达不了就给出最大行驶距离。 
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
	s[n].D = d;		//终点 
	//先将油站按距离排列 
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
			if(s[i].P < pmin){			//寻找在距离内油价最低的油站 
				pmin = s[i].P;
				k = i;
				if(pmin < s[now].P)
					break;
			}
		}
		if(k == -1)				//油满情况下找不到站 
			break;
		double need_gas = (s[k].D - s[now].D) / davg;
		if(pmin < s[now].P){    //如果要到达的站油价小于当前油价，只需加到达下一站油量即可 
			if(gas < need_gas){
				ans += (need_gas - gas) * s[now].P;
				gas = 0;       //到达下一站时将油量置为零 
			}else
				gas -= need_gas;
		}else{
			ans += (c - gas) * s[now].P; //如果到达的站油价大于当前油价，将油量加满 
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

