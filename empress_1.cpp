/*
	Name:empress
	Copyright: 
	Author: macs
	Date: 28/09/18 18:51
	Description:回溯 
*/
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const int max_n = 15;
int count = 0;
bool hashTable[max_n] = {false};
int p[max_n];
int n;
void generateP(int index){
	if(index == n + 1){
//		for(int i = 1; i <= n; i++){
//			printf("%d",p[i]);
//		}
		count++;
//		printf("\n");
		return;
	}
	for(int x = 1; x <= n; x++){
		if(hashTable[x] == false){
			bool flag = true;
			for(int pre = 1; pre < index; pre++){     
			//index和pre代表列，x为index列皇后的行号，p[pre]为pre列的行号 
				if(abs(index - pre) == abs(x - p[pre])){
					flag = false;
					break;
				}
			}
			if(flag){
				p[index] = x;
				hashTable[x] = true;
				generateP(index + 1);
				hashTable[x] = false;
			}
		}
	}
}
int main(){
	n = 9;
	generateP(1);
	printf("%d",count);
	return 0;
}

