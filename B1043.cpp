/*
	Name: Êä³öPATest 
	Copyright: 
	Author: macs 
	Date: 05/10/18 10:39
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int hashTable[54];
int main()
{
	char str;
	int flag = 0;
	memset(hashTable,0,sizeof(hashTable));
	while(scanf("%c",&str) != EOF){
		hashTable[str]++;
		flag++;
	}
	while(flag--){
		if(hashTable['P']){
			printf("P");
			hashTable['P']--;
		}
		if(hashTable['A']){
			printf("A");
			hashTable['A']--;
		}
		if(hashTable['T']){
			printf("T");
			hashTable['T']--;
		}
		if(hashTable['e']){
			printf("e");
			hashTable['e']--;
		}
		if(hashTable['s']){
			printf("s");
			hashTable['s']--;
		}
		if(hashTable['t']){
			printf("t");
			hashTable['t']--;
		}
	}
	return 0;
}

