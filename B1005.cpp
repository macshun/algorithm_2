/*
	Name: ¼ÌÐø£¨3n+1£©²ÂÏë 
	Copyright: 
	Author: macs
	Date: 05/10/18 11:24
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 100000;
bool hashTable[maxn] = {false};
int temp[110],result[110];
int main()
{
	int k,n,cnt = 0,cnt1 = 0;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		temp[cnt++] = n;		
		if(hashTable[n] == false){
			while(n != 1){
				if(n % 2 == 0){
					n = n / 2;
				}else
					n = (3*n + 1) / 2;
				hashTable[n] = true;
			}	
		}	
	}
	for(int i = 0; i < cnt; i++){
		if(hashTable[temp[i]] == false){
			result[cnt1++] = temp[i];
		}
	}
	sort(result,result+cnt1);
	for(int i = cnt1 - 1; i >= 0; i--){
		printf("%d",result[i]);
		if(i != 0){
			printf(" ");
		}
	}
	return 0;
}

