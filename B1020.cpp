/*
	Name: 贪心 -- B1020 月饼 
	Copyright: 
	Author: macs
	Date: 09/10/18 12:45
	Description: 给出月饼总数，以及对应的库存量和总售价，根据市场需求量
				给出最大的收益。 
*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1010;
struct Mooncake{
	double storage;   //库存量 
	double price;	 //总售价 
	double per_price; //单价 
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

