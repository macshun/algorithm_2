/*
	Name: ×Ö·ûÍ³¼Æ 
	Copyright: 
	Author: macs
	Date: 05/10/18 10:35
	Description: 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
int hashTable[128];
int main()
{
	memset(hashTable,0,sizeof(hashTable));
	char str,cstr;
	int max = 0;
	while((str = getchar()) != '\n'){
		if(!isupper(str) && !islower(str)){
			continue;
		}
		if(isupper(str))
			str = tolower(str);
		hashTable[str]++;
		if(hashTable[str] >= max){
			if(hashTable[str] == max){
				if(str > cstr)
					continue;
			}
			max = hashTable[str];
			cstr = str;
		}			
	}
	printf("%c %d",cstr,max);
	return 0;
}

