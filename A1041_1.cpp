/*
	Name: Be unique
	Copyright: 
	Author: mac
	Date: 10/09/18 18:52
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int max_n = 100010;
int num[max_n];
int vis[max_n];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&num[i]);
		vis[num[i]]++;
	}
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(vis[num[i]] == 1){
			printf("%d",num[i]);
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("None");
	}
	return 0;
}

