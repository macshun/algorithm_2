/*
	Name: structsort
	Copyright: 
	Author: mac
	Date: 16/09/18 19:14
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct student{
	char name[10];
	int score;
	int rn;
}stu[100];
bool cmp(student a,student b){
	return a.score > b.score;
}
int main()
{
	freopen("test.txt","r",stdin);
	int n;
	scanf("%d",&n);
	for(int i = 0; i < 5; i++){
		scanf("%s %d",stu[i].name,&stu[i].score);
	}
	sort(stu,stu+5,cmp);
	stu[0].rn = 1;
	
/*****************
保留了排名
******************/ 

//	for(int i = 0; i < 5; i++){
//		if(i > 0 && stu[i].score != stu[i-1].score){
//			stu[i].rn = i + 1;
//		}else if(stu[i].score == stu[i-1].score)
//			stu[i].rn = stu[i-1].rn;
//		printf("%d %s %d\n",stu[i].rn,stu[i].name,stu[i].score);
//	}

/***********************
边排边输出 
***********************/ 
	int r = 1;
	for(int i = 0; i < 5; i++){
		if(i > 0 && stu[i].score != stu[i-1].score){
			r = i + 1;
		}
		printf("%d %s %d\n",r,stu[i].name,stu[i].score);
	}
	return 0;
}

