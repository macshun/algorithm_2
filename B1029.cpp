/*
	Name: ¾É¼üÅÌ 
	Copyright: 
	Author: macs
	Date: 29/09/18 09:46
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <map>
using namespace std;
map<char,bool> mip;
int main()
{
	char line1[81],line2[81];
	scanf("%s %s",line2,line1);
	for(int i = 0; i < strlen(line1); i++){
		line1[i] = tolower(line1[i]);
		mip[line1[i]] = true;
	}
	for(int i = 0; i < strlen(line2); i++){
		line2[i] = tolower(line2[i]);
		if(mip[line2[i]] == false){
			if(line2[i] <= 'z' && line2[i] >= 'a'){
				printf("%c",line2[i] - 32);
			}else
			printf("%c",line2[i]);
			mip[line2[i]] = true;
		}
	}
	return 0;
}

