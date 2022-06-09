#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,v,s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		v=i*i*i;
		s=6*i*i;
		cout<<v<<setw(10)<<s<<endl;
	}
	return 0;
}
