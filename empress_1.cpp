/*
	Name:empress
	Copyright: 
	Author: macs
	Date: 28/09/18 18:51
	Description:���� 
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
			//index��pre�����У�xΪindex�лʺ���кţ�p[pre]Ϊpre�е��к� 
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

