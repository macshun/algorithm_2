/*
	Name: List Sorting
	Copyright: 
	Author: macs
	Date: 20/09/18 19:21
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Student{
	char ID[7];
	char name[9];
	int grade;
}stu[100010];
bool cmp1(Student a,Student b){
	return strcmp(a.ID,b.ID) < 0;
}
bool cmp2(Student a,Student b){
	if(strcmp(a.name,b.name) != 0)
		return strcmp(a.name,b.name) < 0;
	else
		return strcmp(a.ID,b.ID) < 0;
}
bool cmp3(Student a,Student b){
	if(a.grade != b.grade) return a.grade < b.grade;
	else return strcmp(a.ID,b.ID) < 0; 
}
int main()
{
	freopen("test.txt","r",stdin);
	int n,c;
	scanf("%d%d",&n,&c);
	for(int i = 0; i < n; i++){
		scanf("%s %s %d",stu[i].ID,stu[i].name,&stu[i].grade);
	}
	if(c == 1){
		sort(stu,stu+n,cmp1);
	}else
	if(c == 2){
		sort(stu,stu+n,cmp2);
	}else
		sort(stu,stu+n,cmp3);
	for(int i = 0; i < n; i++){
		printf("%s %s %d\n",stu[i].ID,stu[i].name,stu[i].grade);
	}
	return 0;
}

