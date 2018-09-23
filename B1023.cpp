/*
	Name: 贪心 -- B1023 组个最小数 
	Copyright: 
	Author: macs 
	Date: 10/10/18 10:34
	Description:  给定数字 0-9 各若干个。你可以以任意顺序排列这些数字，但必须全部使用。
	目标是使得最后得到的数尽可能小（注意 0 不能做首位）。例如：给定两个 0，两个 1，三
	个 5，一个 8，我们得到的最小的数就是 10015558。
	现给定数字，请编写程序输出能够组成的最小的数。
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int num[10],len = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d",&num[i]);
		len += num[i];
	}
	int flag = 1;
	for(int i = 0; i < len; i++){
		for(int j = 0; j < 10; j++){
			if(flag && j == 0){
				continue;
			}else if(num[j] > 0){
				printf("%d",j);
				num[j]--;
				flag = 0;
				break;
			}
		}
	}
	return 0;
}

