#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=1;
	cin>>n;
	if(n==0)
	{
	cout<<1<<endl;
	return 0;
	}
	for(int i=n;i>0;i--)
	{
		s=s*i;
	}
	cout<<n<<"!= "<<s<<endl;
	return 0;
}

