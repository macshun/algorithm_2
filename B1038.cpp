/*
	Name: 统计同成绩学生 
	Copyright: 
	Author: macs
	Date: 01/10/18 08:20
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 110;
int stu[maxn];
int main()
{
	memset(stu,0,sizeof(stu));
	int n;
	scanf("%d",&n);
	while(n--){
		int result;
		scanf("%d",&result);
		stu[result]++;
	}
	int k;
	scanf("%d",&k);
	while(k--){
		int result;
		scanf("%d",&result);
		printf("%d",stu[result]);
		if(k != 0){
			printf(" ");
		}
	}
	return 0;
}

