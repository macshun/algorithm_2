/*
	Name: 关于sort函数的写法 
	Copyright: 
	Author: mac
	Date: 15/09/18 17:39
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
bool cmp(char a,char b){
	return a > b;
}
int main()
{
	char a[6] = {'b','c','a','e','f','d'};
	sort(a,a+strlen(a),cmp);
	for(int i = 0; i < 6; i++){
		printf("%c",a[i]);
		if(i != 5){
			printf(" ");
		}
	}
	return 0;
}

