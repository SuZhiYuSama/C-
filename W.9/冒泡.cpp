#include<bits/stdc++.h>
using namespace std;
int MAXN=10;
int main()
{
	int t,a[MAXN]={0},j,n,flag;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=0;j<n-1;j++)
		{
			flag=0;
			for(int c=0;c<n;c++)
			{
				if(a[c]>a[c+1])swap(a[c],a[c+1]),flag+=1;
				if(c==n-2)
				{
					for(int y=0;y<n;y++)cout<<a[y]<<setw(3);
					cout<<endl;
				}
			}
		}
	}
	return 0;
}
