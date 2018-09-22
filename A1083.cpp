/*
	Name: List Grades
	Copyright: 
	Author: macs
	Date: 22/09/18 08:52
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int max_n = 10010;
struct student{
	char name[13],id[13];
	int grade;
}stu[max_n];
bool cmp(student a,student b){
	return a.grade > b.grade;
}
int main()
{
	freopen("test.txt","r",stdin);
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s %s %d",stu[i].name,stu[i].id,&stu[i].grade);
	}	
	sort(stu,stu+n,cmp);
	int gradeL,gradeR;
	bool flag = true;
	scanf("%d%d",&gradeL,&gradeR);
	for(int i = 0; i < n; i++){
		if(stu[i].grade <= gradeR && stu[i].grade >= gradeL){
			printf("%s %s\n",stu[i].name,stu[i].id);
			flag = false;
		}
	}
	if(flag){
		printf("NONE\n");
	}
	return 0;
}

