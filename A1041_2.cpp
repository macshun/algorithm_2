/*
	Name: be unique
	Copyright: 
	Author: macs
	Date: 07/10/18 09:16
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 10010;
int hashTable[maxn] = {0};
int record[maxn];
int main()
{
	int n,cnt = 0,i;
	scanf("%d",&n);
	while(n--){
		int bets;
		scanf("%d",&bets);
		hashTable[bets]++;
		record[cnt++] = bets;
	}
	for(i = 0; i < cnt; i++){
		if(hashTable[record[i]] == 1){
			printf("%d",record[i]);
			break;
		}
	}
	if(i == cnt){
		printf("None");
	}
	return 0;
}

