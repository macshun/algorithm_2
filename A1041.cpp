/*
	Name: Be unique
	Copyright: 
	Author: mac
	Date: 10/09/18 17:35
	Description: 
*/
#include <cstdio>
#include <iostream>
using namespace std;
const int max_n = 100000;
int num[max_n];
int main()
{
	int n;
//	freopen("test.txt","r",stdin);
	bool flag1 = true;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&num[i]);
	}
	for(int i = 0;i < n - 1; i++){
		bool flag = true;
		if(num[i] != 0){
			for(int j = i + 1; j < n; j++){
					if(num[i] == num[j]){
						flag = false;
						num[j] = 0;
					}
			}
			if(flag){
				printf("%d",num[i]);
				flag1 = false;
				break;
			}
		}
	}
	if(flag1){
		if(num[n-1] != 0){
			printf("%d",num[n-1]);
		}else
			printf("None");
	}
	return 0;
}

