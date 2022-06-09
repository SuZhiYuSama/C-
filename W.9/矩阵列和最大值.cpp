#include<bits/stdc++.h>
using namespace std;
int MAXN=11;
int main()
{
	int t,n,a[MAXN][MAXN]={0},sum,maxn;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
			for(int q=0;q<n;q++)
			cin>>a[j][q];
		}
		for(int j=0;j<n;j++)
		{
			sum=0;
			for(int q=0;q<n;q++)
			{
				maxn=max(a[q][j],a[q+1][j]);
				sum+=a[q][j];
			}
			cout<<maxn<<setw(5)<<sum<<endl;;
		}
	}
	return 0;
}
