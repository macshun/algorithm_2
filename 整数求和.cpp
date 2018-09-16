/*
	Name: 
	Copyright: 
	Author: mac
	Date: 17/09/18 16:01
	Description: 给定整数n，取若干个1到n的整数可求和等于整数m，编程求出所有组合的个数。比如当n=6，m=8时，
	有四种组合：[2,6], [3,5], [1,2,5], [1,3,4]。限定n和m小于120 
*/
#include<cstdlib>
#include<cstdio>
int cnt(int n,int m){
	if(m == 0 && n >= 0){
		return 1;
	}else if(n < 0){
		return 0;
	}
	if(m >= n){
		return cnt(n-1,m-n) + cnt(n-1,m);	
	}else
		return cnt(n-1,m);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",cnt(n,m));
	return 0;
}
