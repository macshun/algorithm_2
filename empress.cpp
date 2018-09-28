/*
	Name: n�ʺ� 
	Copyright:
	Author: macs
	Date: 28/09/18 13:20
	Description: ���� 
*/
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const int max_n = 15;
int count = 0;
int n,p[max_n];
bool hashTable[max_n] = {false};
void generateP(int index){
	if(index == n + 1){
		bool flag = true;
		for(int i = 1; i <= n; i++){    //i,j�����У�p[i],p[j]������ 
			for(int j = i + 1; j <= n; j++){
				if(abs(i - j) == abs(p[i]-p[j])){
					flag = false;
					break;
				}
			}
		}
		if(flag){
			for(int i = 1; i <= n; i++){
				printf("%d",p[i]);
			}
			count++;
			printf("\n");
		}
		return;
	}
	for(int x = 1; x <= n; x++){
		if(hashTable[x] == false){
			p[index] = x;
			hashTable[x] = true;
			generateP(index + 1);
			hashTable[x] = false;
		}
	}
}
int main(){
	scanf("%d",&n);
	generateP(1);
	printf("%d",count);
	return 0;
}

