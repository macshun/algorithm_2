/*
	Name: ¾É¼üÅÌ´ò×Ö 
	Copyright: 
	Author: macs
	Date: 30/09/18 10:30
	Description: hash 
*/
#include <cstdio>
#include <cstring>
#include <map>
#include <cctype>
using namespace std;
const int max_n = 100010;
char str[max_n];
map<char,bool> mip;
int main()
{
    scanf("%s",str);
	int len = strlen(str);
	for(int i = 0; i < len; i++){
		mip[str[i]] = true;
	}
	scanf("%s",str);
	len = strlen(str);
	for(int i = 0; i < len; i++){
		if(isupper(str[i]) && mip['+'] || mip[toupper(str[i])]){
		  continue;
		}else{
			printf("%c",str[i]);
		}
	}
	printf("\n");
	return 0;
}

