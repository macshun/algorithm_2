/*
	Name: The world's Richest
	Copyright: 
	Author: macs
	Date: 21/09/18 09:12
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int max_n = 100010;
struct Billion{
	char name[9];
	int age;
	int worth;
}rich[max_n],valid[max_n];
int Age[max_n] = {0};
bool cmp(Billion a,Billion b){
	if(a.worth != b.worth) return a.worth > b.worth;
	else if(a.age != b.age) return a.age < b.age;
	else return strcmp(a.name,b.name) < 0;
}
int main()
{
	freopen("test.txt","r",stdin);
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i = 0; i < n; i++){
		scanf("%s %d %d",rich[i].name,&rich[i].age,&rich[i].worth);
	}
	sort(rich,rich+n,cmp);
	int validNum = 0;
	for(int i = 0; i < n; i++){
		if(Age[rich[i].age] < 100){
			Age[rich[i].age]++;
			valid[validNum++] = rich[i]; 
		}
	}
	for(int i = 0; i < k; i++){
		int Amin,Amax,num,cnt = 0;
		scanf("%d%d%d",&num,&Amin,&Amax);
		printf("Case #%d:\n",i+1);
		for(int j = 0; j < validNum && cnt < num; j++){
			if(valid[j].age <= Amax && valid[j].age >= Amin){
				printf("%s %d %d\n",valid[j].name,valid[j].age,valid[j].worth);
				cnt++;
			}
		}
		if(cnt == 0){
			printf("None\n");
		}
	}
	return 0;
}

