/*
	Name: 贪心 -- 区间贪心 
	Copyright: 算法笔记 
	Author: macs 
	Date: 11/10/18 13:06
	Description:  给出N个开区间(x,y),从中选择尽可能多的开区间，使得这些开区间两两没有交集。 
*/
#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;
const int maxn = 50;
struct Interval{
	int x,y;
}interval[maxn];
bool cmp(Interval a,Interval b){     //从后往前，x尽可能的大，越大前面空间越多。 
	if(a.x != b.x) return a.x > b.x;
	else return a.y < b.y;			//当x相等时，y尽可能的小，越小不被后面包含的可能性越大。 
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
	区间选点问题:给出N个闭区间[x,y],求最少需要确定多少个点，才能使每个区间中有一个点 
	只需要将I[i].x >= nextX 改为 I[i].x > nextX; 
*/ 
