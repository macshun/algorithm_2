/*
	Name: µ½µ×Âò²»Âò 
	Copyright: 
	Author:macs 
	Date: 01/10/18 08:33
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring> 
#include <map>
using namespace std;
map<char,int> mip;
int main()
{
	char str[1010];
	int j,flag = 0;
	scanf("%s",str);
	int len1 = strlen(str);
	for(int i = 0; i < len1; i++){
		mip[str[i]]++;
	}
	scanf("%s",str);
	int len2 = strlen(str);
	for(j = 0; j < len2; j++){
		mip[str[j]]--;
		if(mip[str[j]] < 0){
			flag++;
		}
	}
	if(flag > 0) printf("No %d",flag);
	else printf("Yes %d",len1 - len2);
	return 0;
}

