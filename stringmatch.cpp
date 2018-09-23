/*
	Name: stringmatch
	Copyright: 
	Author: macs
	Date: 24/09/18 21:11
	Description: 
*/
#include<iostream>
#include<cctype>        //包含tolower()函数，作用为如果参数为大写，则返回其小写
using namespace std;
bool search(string a,string b,int m)
{
	int l1=a.size();
	int l2=b.size();
	if(m==0)
	{
		for(int j=0;j<l2;j++)
			b[j]=tolower(b[j]);
	}
	int i(0);
	for(int j=0;j<l2;j++)
	{
		if(a[i]==b[j])
		{
			i++;
			if(i==l1)
			{
				return true;
				break;
			}	
		}
		else
			i=0;
	}
	return false;
}
int main()
{
	string a;
	cin>>a;
	int m;
	cin>>m;
	if(m==0)
	{
		for(int i=0;i<a.size();i++)
			a[i]=tolower(a[i]);
	}
	int n;
	cin>>n;
	string b[n];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
	{
		if(search(a,b[i],m))
			cout<<b[i]<<endl;
	}
	return 0;
}

