/*
	Name:  Ã°ÅÝÅÅÐò 
	Copyright: 
	Author: mac
	Date: 10/09/18 10:29
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[5] = {3,4,2,1,5};
	for(int i = 1;i < 5; i++){
		for(int j = 0;j < 5 - i; j++){		
			if(num[j-1] > num[j]){
				int temp = num[j-1];
				num[j-1] = num[j];
				num[j] = temp;
			}
		}
	}
	for(int i = 0;i < 5; i++){
		printf("%d ",num[i]);
	}
	return 0;
}

