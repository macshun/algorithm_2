/*
	Name: find coins
	Copyright: 
	Author: macs
	Date: 07/10/18 10:05
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 100010;
int hashTable[1005] = {0};
int main()
{
	int n,m,a;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		scanf("%d",&a);
		hashTable[a]++;
	}
	for(int i = 1; i < m; i++){
		if(hashTable[i] && hashTable[m - i]){
			if(i == m - i && hashTable[i] <= 1)
				continue;
			printf("%d %d",i,m - i);
			return 0;
		}
	}	
	printf("No Solution");
	return 0;
}

