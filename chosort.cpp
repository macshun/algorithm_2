/*
	Name: —°‘Ò≈≈–Ú 
	Copyright: 
	Author: mac 
	Date: 13/09/18 20:41
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[5] = {5,4,3,2,1};
//	for(int i = 0; i < 5; i++){
//		for(int j = i; j < 5; j++){
//			if(num[i] > num[j]){
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
	for(int i = 0; i < 5; i++){
		int k = i;
		for(int j = i; j < 5; j++){
			if(num[k] > num[j]){
				k = j;
			}
		}
		int temp = num[i];
		num[i] = num[k];
		num[k] = temp;
	}
	for(int i = 0; i < 5; i++){
		printf("%d",num[i]);
		if(i != 4){
			printf(" ");
		}
	}
	return 0;
}

