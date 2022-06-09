#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10],mb,i,k;
	cin>>n;
	int b[n];
	for(i=0;i<n;i++)
	{
		for(int c=0;c<10;c++)
		cin>>a[c];
		k=0;
		cin>>mb;
		for (int d=0;d<10;d++)
		{
			if(mb==a[d])b[i]=d;k+=1;
		}
		if(k==0)b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==0)cout<<"Not found"<<endl;
		else cout<<b[i]<<endl;
	}
	return 0;
}
