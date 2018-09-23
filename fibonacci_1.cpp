/*
	Name: fibonacci
	Copyright: 
	Author: macs
	Date: 28/09/18 10:25
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int fibo(int n){
	if(n < 0) return -1;
	if(n <= 1) return 1;
	int pre1 = 1,pre2 = 1,cur = 2;
	for(int i = 2; i <= n; i++){
		cur = pre1 + pre2;
		pre2 = pre1;
		pre1 = cur;
	}
	return cur;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fibo(n));
	return 0;
}

