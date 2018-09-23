/*
	Name: n!
	Copyright: 
	Author: macs
	Date: 28/09/18 10:03
	Description: 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int f(int n){
	if(n == 0) return 1;
	else return f(n-1)*n;	
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}

