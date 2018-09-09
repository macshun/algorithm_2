/*
	Name: two pointers
	Copyright: 
	Author: mac
	Date: 09/09/18 21:51
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[9] = {1,2,3,4,5,6,7,8,9};
	int M = 8;
//	for(int i = 0; i < 9; i++){
//		for(int j = i + 1; j < 9; j++){
//			if(num[i] + num[j] == M){
//				printf("%d %d\n",num[i],num[j]);
//			}
//		}
//	}
	int i = 0,j = 8;
	while(i < j){
		if(num[i] + num[j] == M){
			printf("%d %d\n",num[i],num[j]);
			i++;
			j--;
		}else if(num[i] + num[j] < M){
			i++;
		}else{
			j--;
		}
	}
	return 0;
}

