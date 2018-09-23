/*
	Name: fibonacci
	Copyright: 
	Author: macs
	Date: 28/09/18 10:10
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int fibonacci(int n){
	if(n == 0 || n == 1) return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fibonacci(n));
	return 0;
}

