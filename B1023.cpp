/*
	Name: ̰�� -- B1023 �����С�� 
	Copyright: 
	Author: macs 
	Date: 10/10/18 10:34
	Description:  �������� 0-9 �����ɸ��������������˳��������Щ���֣�������ȫ��ʹ�á�
	Ŀ����ʹ�����õ�����������С��ע�� 0 ��������λ�������磺�������� 0������ 1����
	�� 5��һ�� 8�����ǵõ�����С�������� 10015558��
	�ָ������֣����д��������ܹ���ɵ���С������
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

