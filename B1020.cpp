/*
	Name: ̰�� -- B1020 �±� 
	Copyright: 
	Author: macs
	Date: 09/10/18 12:45
	Description: �����±��������Լ���Ӧ�Ŀ���������ۼۣ������г�������
				�����������档 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1010;
struct Mooncake{
	double storage;   //����� 
	double price;	 //���ۼ� 
	double per_price; //���� 
}cake[maxn];
bool cmp(Mooncake a,Mooncake b){
	return a.per_price > b.per_price;
}
int main()
{
	int N,D;
	double profit = 0;
	scanf("%d%d",&N,&D);
	for(int i = 0; i < N; i++){
		scanf("%lf",&cake[i].storage);
	}
	for(int i = 0; i < N; i++){
		scanf("%lf",&cake[i].price);
	}
	for(int i = 0; i < N; i++){
		cake[i].per_price = cake[i].price / cake[i].storage;
	}
	sort(cake, cake+N, cmp);
	for(int i = 0; i < N; i++){
		if(D - cake[i].storage >= 0){
			profit += cake[i].price;
			D = D - cake[i].storage;	
		}else{
			profit += cake[i].per_price * D;
			break;
		}
	}
	printf("%.2lf",profit);
	return 0;
}

