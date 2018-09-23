/*
	Name: map
	Copyright: 
	Author: macs
	Date: 23/09/18 17:11
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
int main()
{
	freopen("test.txt","r",stdin);
	map <string,int> mip;
	string a;
	while(cin >> a){
		mip[a]++;
	}
	for(map<string,int>::iterator flag = mip.begin(); flag != mip.end(); flag++){
		cout << flag -> first << " : " << flag -> second << endl;
	}
	return 0;
}

