/*
	Name: hashPractise
	Copyright: 
	Author: macs
	Date: 23/09/18 11:23
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int max_n = 100;
char s[max_n][5],temp[5];
int hashTable[26*26*26+10];
int hashFunc(char s[],int len){
	int id = 0;
	for(int i = 0; i < len; i++){
		id = id * 26 + (s[i]-'A');
	}
	return id;
}
int main()
{
	memset(hashTable,0,sizeof(hashTable));
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){ 
		scanf("%s",s[i]);
		int id = hashFunc(s[i],3);
		hashTable[id]++;
	}
	for(int i = 0; i < m; i++){
		scanf("%s",temp);
		int id = hashFunc(temp,3);
		printf("%d\n",hashTable[id]);
	}
	return 0;
}

