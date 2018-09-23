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
}I[maxn];
bool cmp(Interval a,Interval b){
	if(a.y != b.y) return a.y < b.y;
	else return  a.x > b.x;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d%d",&I[i].x,&I[i].y);
	}
	sort(I, I+n, cmp);
	int ans = 1,nextX = I[0].y;
	for(int i = 0; i < n; i++){
		if(I[i].x >= nextX){
			nextX = I[i].y;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
/*
	区间选点问题只需要将I[i].x >= nextX 改为 I[i].x > nextX; 
*/ 
