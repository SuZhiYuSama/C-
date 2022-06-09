#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,s=1,sum=0;
	cin>>n;
	if(n==0)
	{
		cout<<"Sn="<<1<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int c=1;c<=i;c++)
		{
			s*=c;
		}
		sum+=s;
		s=1;
	}
	cout<<"Sn="<<sum<<endl;
	return 0;
}
