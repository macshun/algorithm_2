/*
	Name: ѡ������ 
	Copyright: 
	Author: mac 
	Date: 13/09/18 20:41
<<<<<<< HEAD
	Description: 
=======
	Description: ѡ����С���뵱ǰ�������е�һ����������
				��0��i��Ϊ���ţ���i+1��n��δ�š����ȶ�O(n^2)
>>>>>>> Create 1
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
<<<<<<< HEAD
	int num[5] = {5,4,3,2,1};
=======
	int num[5] = {5,3,3,2,1};
>>>>>>> Create 1
//	for(int i = 0; i < 5; i++){
//		for(int j = i; j < 5; j++){
//			if(num[i] > num[j]){
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
<<<<<<< HEAD
	for(int i = 0; i < 5; i++){
		int k = i;
		for(int j = i; j < 5; j++){
			if(num[k] > num[j]){
=======
	for(int i = 0; i < 5; i++){    //��ǰ������ 
		int k = i;
		for(int j = i; j < 5; j++){
			if(num[k] >= num[j]){
>>>>>>> Create 1
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

