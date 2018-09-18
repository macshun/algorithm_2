/*
	Name: µÂ²ÅÂÛ 
	Copyright: 
	Author: mac
	Date: 17/09/18 19:07
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm> 
using namespace std;
struct student{
	char id[9];
	int d_score;
	int c_score;
}stu[100010],stu1[100010],stu2[100010],stu3[100010],stu4[100010];
bool cmp(student a,student b){
	if(a.d_score + a.c_score != b.c_score + b.d_score){		
		return a.d_score + a.c_score > b.c_score + b.d_score;
	}
	else if(a.d_score != b.d_score) return a.d_score > b.d_score;
	else return strcmp(a.id,b.id) < 0;
}
int main()
{
	freopen("test.txt","r",stdin);
	int n,l,h,num1 = 0,num2 = 0,num3 = 0,num4 = 0;
	scanf("%d%d%d",&n,&l,&h);
	for(int i = 0; i < n; i++){
		scanf("%s %d %d",stu[i].id,&stu[i].d_score,&stu[i].c_score);
		if(stu[i].c_score >= l && stu[i].d_score >= l){
			if(stu[i].c_score >= h && stu[i].d_score >= h){
				stu1[num1++] = stu[i];
			}else if(stu[i].d_score >= h){
				stu2[num2++] = stu[i];
			}else if(stu[i].d_score >= stu[i].c_score){
				stu3[num3++] = stu[i];
			}else	
				stu4[num4++] = stu[i];
		}
	}
	sort(stu1,stu1+num1,cmp);
	sort(stu2,stu2+num2,cmp);
	sort(stu3,stu3+num3,cmp);
	sort(stu4,stu4+num4,cmp);
	printf("%d\n",num1+num2+num3+num4);
	for(int i = 0; i < num1; i++){
		printf("%s %d %d\n",stu1[i].id,stu1[i].d_score,stu1[i].c_score);
	}
	for(int i = 0; i < num2; i++){
		printf("%s %d %d\n",stu2[i].id,stu2[i].d_score,stu2[i].c_score);
	}
	for(int i = 0; i < num3; i++){
		printf("%s %d %d\n",stu3[i].id,stu3[i].d_score,stu3[i].c_score);
	}
	for(int i = 0; i < num4; i++){
		printf("%s %d %d\n",stu4[i].id,stu4[i].d_score,stu4[i].c_score);
	}
	return 0;
}

