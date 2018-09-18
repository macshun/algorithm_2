/*
	Name: The best Rank
	Copyright: 
	Author: mac
	Date: 17/09/18 20:20
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct student{
	int id;
	int grade[4];
}stu[2010];
char course[4] = {'A','C','M','E'};
int now;
int Rank[10000000][4] = {0};
bool cmp(student a,student b){
	return a.grade[now] > b.grade[now];
}
int main()
{
	freopen("test.txt","r",stdin);
	int n,m,cid;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		scanf("%d %d %d %d",&stu[i].id,&stu[i].grade[1],&stu[i].grade[2],&stu[i].grade[3]);
		stu[i].grade[0] = (stu[i].grade[1] + stu[i].grade[2] + stu[i].grade[3]) / 3.0;
	}
	for(now = 0; now < 4; now++) {
		sort(stu,stu+n,cmp);
		Rank[stu[0].id][now] = 1;
		for(int i = 1; i < n; i++){
		if(stu[i].grade[now] == stu[i-1].grade[now])
			Rank[stu[i].id][now] = Rank[stu[i-1].id][now];
		else
			Rank[stu[i].id][now] = i + 1;
		}
	}
	
	while(m--){
		scanf("%d",&cid);
		if(Rank[cid][0] == 0)
			printf("N/A\n");
		else{
			int k = 0;
			for(int i = 0; i < 4; i++){
				if(Rank[cid][i] < Rank[cid][k]){
					k = i;
				}
			}
			printf("%d %c\n",Rank[cid][k],course[k]);
		}
	}
	
	return 0;
}

