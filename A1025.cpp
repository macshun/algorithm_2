/*
	Name: A1025
	Copyright: 
	Author: mac
	Date: 17/09/18 17:08
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Testee{
	char id[15];
	int score;
	int location_number;
	int local_rank;
}stu[30010];
bool cmp(Testee a,Testee b){
	if(a.score != b.score) return a.score > b.score;
	else return strcmp(a.id,b.id) < 0;
}
int main()
{
	freopen("test.txt","r",stdin);
	int n,total = 0;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		int k;
		scanf("%d",&k);
		for(int j = 0; j < k; j++){
			scanf("%s %d",stu[total].id,&stu[total].score);
			stu[total].location_number = i;
			total++;
		}
		sort(stu + total - k ,stu + total,cmp);
		stu[total - k].local_rank = 1;
		for(int j = total - k + 1; j < total; j++){
			if(stu[j].score == stu[j-1].score){
				stu[j].local_rank = stu[j-1].local_rank;
			}else
				stu[j].local_rank = j - (total - k) + 1;
		}
	}	
	printf("%d\n",total);
	sort(stu,stu+total,cmp);
	int r = 1;
	for(int i = 0; i < total; i++){
		if(i > 0 && stu[i].score != stu[i-1].score){
			r = i + 1;
		}
		printf("%s %d %d %d\n",stu[i].id,r,stu[i].location_number,stu[i].local_rank);
	}
	return 0;
}

