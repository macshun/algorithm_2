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
	����ѡ������ֻ��Ҫ��I[i].x >= nextX ��Ϊ I[i].x > nextX; 
*/ 
