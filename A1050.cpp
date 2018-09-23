/*
	Name: String Subtraction
	Copyright: 
	Author: macs
	Date: 07/10/18 09:33
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 10010;
char s1[maxn],s2[maxn];
bool hashTable[128] = {false};
int main()
{
	int i = 0,j = 0;
	while((s1[i] = getchar()) != '\n'){
		i++;
	}
	while((s2[j] = getchar()) != '\n'){
		hashTable[s2[j]] = true;
		j++;
	}
	for(int k = 0; k < i; k++){
		if(hashTable[s1[k]])
			continue;
		printf("%c",s1[k]);
	}
	return 0;
}

