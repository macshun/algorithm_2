/*
	Name: 合并俩递增数组 
	Copyright: 
	Author: mac
	Date: 09/09/18 22:05
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int A[5] = {1,3,5,7,9},B[5] = {0,2,4,6,8};
	int C[10],index = 0,i = 0,j = 0;
	while(i < 5 && j < 5){
		if(A[i] <= B[j]){
			C[index++] = A[i++];
		}else
			C[index++] = B[j++];
	}
	while(i < 5) C[index++] = A[i++];
	while(j < 5) C[index++] = B[j++];
	for(int i = 0; i < 10; i++){
		printf("%d",C[i]);
		if(i != 9)
			printf(" ");
	}
	return 0;
}

