// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "string.h"
using namespace std;
void insertSort(int a[]);
int _tmain(int argc, _TCHAR* argv[])
{
	int a[6];
	memset(a,0,sizeof(a));
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	insertSort(a);
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
void insertSort(int a[])
{
	int i,j;
	for(j=1;j<6;j++)
	{
		int key = a[j];
		i = j-1;
		while(i>=0 && a[i]<key)
		{
			a[i+1] = a[i];
			i = i-1;
		}
		a[i+1] = key;
	}
}

