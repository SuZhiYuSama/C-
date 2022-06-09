#include<bits/stdc++.h>
using namespace std;
int MAXN=32;
int main()
{
	int t,n,a[MAXN]={0},sum,zzs,fzs,maxn,minn,pj,dy,xy;
	cin>>t;
	for(int z=0;z<t;z++)
	{
		cin>>n;
		sum=0,zzs=0,fzs=0,dy=0,xy=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]>0)zzs+=1;
			if(a[i]<0)fzs+=1;
		}
		pj=sum/n;
		maxn=a[0],minn=a[0];
		for(int j=0;j<n;j++)
		{
			if(a[j]>maxn)maxn=a[j];
			if(a[j]<minn)minn=a[j];
			if(a[j]<pj)xy+=1;
			if(a[j]>pj)dy+=1;
		}
		cout<<dy<<setw(5)<<xy<<endl;
		cout<<zzs<<setw(5)<<fzs<<endl;
		cout<<"MAX="<<maxn<<setw(5)<<"MIN="<<minn<<endl;
	}
	return 0;
}
