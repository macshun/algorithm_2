#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <map>
using namespace std;
map<char,int> mip;
int main()
{
	char s1[61],s2[61];
	scanf("%s",s1);
	scanf("%s",s2);
	int cnt = 0;
   	for(int i = 0; i < strlen(s1); i++){
   		mip[tolower(s1[i])]++;	
	}
	for(int i = 0; i < strlen(s2); i++){
		if(mip[tolower(s2[i])] > 0){
			cnt++;
			mip[tolower(s2[i])]--;
		}
	}
	printf("%d\n",cnt);
	return 0;
}

