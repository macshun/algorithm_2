/*
	Name:  Ã°ÅÝÅÅÐò 
	Copyright: 
	Author: mac
	Date: 10/09/18 10:29
	Description: �����Ƚ�->�������ס�O(n^2)�ȶ�
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[5] = {3,4,2,1,5};
	for(int i = 1;i < 5; i++){
<<<<<<< HEAD
		for(int j = 0;j < 5 - i; j++){
=======
		for(int j = 0;j < 5 - i; j++){		
>>>>>>> Create 1
			if(num[j] > num[j+1]){
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(int i = 0;i < 5; i++){
		printf("%d ",num[i]);
	}
	return 0;
}

