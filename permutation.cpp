/*
	Name: full permutation
	Copyright:
	Author: macs
	Date: 28/09/18 12:36
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int max_n = 11;
int n,p[max_n],hashTable[max_n] = {false};
void generateP(int index){
	if(index == n + 1){
		for(int i = 1; i <= n; i++){
			printf("%d",p[i]);
		}
		printf("\n");
		return;
	}
	for(int i = 1; i <= n; i++){
		if(hashTable[i] == false){
			p[index] = i;
			hashTable[i] = true;
			generateP(index + 1);
			hashTable[i] = false;
		}
	}
}
int main()
{
	scanf("%d",&n);
	generateP(1);
	return 0;
}

