#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=2)
	{
		cout<<1<<" "<<1;
		return 0;
	}
	int a[n];
	a[0]=1,a[1]=1;
	for(int i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
