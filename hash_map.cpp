/*
	Name: map_hash
	Copyright: 
	Author: macs
	Date: 27/09/18 17:58
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <map>
#include <string>
using namespace std;
map<string,int> mip;
int main()
{
	int n,m;
	string a,b;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		cin >> a;
		mip[a]++;
	}
	for(int i = 0; i < m; i++){
		cin >> b;
		printf("%d\n",mip[b]);
	}
	return 0;
}

