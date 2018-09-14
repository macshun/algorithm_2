/*
	Name: 插入排序 
	Copyright: 
	Author: mac
	Date: 14/09/18 09:00
	Description: 从1到n枚举，依次插入前方有序序列。稳定o(n^2)
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[5] = {5,2,3,4,1};
	for(int i = 1; i < 5; i++){
		int temp = num[i],j = i;
		while(temp < num[j - 1] && j >= 1){
			num[j] = num[j-1];
			j--;
		}
		num[j] = temp;
	}
	for(int i = 0; i < 5; i++){
		printf("%d",num[i]);
		if(i != 4){
			printf(" ");
		}
	}
	return 0;
}

