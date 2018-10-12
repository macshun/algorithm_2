/*
	Name: ̰�� -- ����̰�� 
	Copyright: �㷨�ʼ� 
	Author: macs 
	Date: 11/10/18 13:06
	Description:  ����N��������(x,y),����ѡ�񾡿��ܶ�Ŀ����䣬ʹ����Щ����������û�н����� 
*/
#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;
const int maxn = 50;
struct Interval{
	int x,y;
}interval[maxn];
bool cmp(Interval a,Interval b){     //�Ӻ���ǰ��x�����ܵĴ�Խ��ǰ��ռ�Խ�ࡣ 
	if(a.x != b.x) return a.x > b.x;
	else return a.y < b.y;			//��x���ʱ��y�����ܵ�С��ԽС������������Ŀ�����Խ�� 
} 
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d%d",&interval[i].x,&interval[i].y);
	}
	sort(interval, interval+n, cmp);
	int ans = 1,lastX = interval[0].x;
	for(int i = 1; i < n; i++){
		if(interval[i].y <= lastX){
			lastX = interval[i].x;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
/*
	����ѡ������:����N��������[x,y],��������Ҫȷ�����ٸ��㣬����ʹÿ����������һ���� 
	ֻ��Ҫ��I[i].x >= nextX ��Ϊ I[i].x > nextX; 
*/ 
