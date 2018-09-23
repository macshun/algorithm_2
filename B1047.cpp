/*
	Name: 编程团体赛 
	Copyright: 
	Author: macs
	Date: 05/10/18 11:09
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int hashTable[1010];
int main()
{
	int n,team_num,id,grade;
	int max = 0,cnum;
	scanf("%d",&n);
	while(n--){
		scanf("%d-%d%d",&team_num,&id,&grade);
		hashTable[team_num] += grade;
		if(hashTable[team_num] > max){
			max = hashTable[team_num];
			cnum = team_num;
		}
	}
	printf("%d %d",cnum,max);
	return 0;
}

