/*
	Name: structural sort
	Copyright: 
	Author: mac
	Date: 15/09/18 17:55
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node{
	int x,y; 
}str[10];
bool cmp(node a,node b){
	if(a.x != b.x) return a.x > b.x;
	else return a.y < b.y;
}
int main()
{
	str[0].x = 1;
	str[0].y = 1;
	str[1].x = 1;
	str[1].y = 2;
	str[2].x = 3;
	str[2].y = 3;
	sort(str,str+3,cmp);
	for(int i = 0; i < 3; i++){
		printf("%d %d\n",str[i].x,str[i].y);
	}
	return 0;
}

