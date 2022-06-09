#include<bits/stdc++.h>
using namespace std;
int MAXN=20;//最大 
int main()
{
	int t,a[MAXN]={0},i,k,minn,m,flag,n;//定义 
	scanf("%d",&t);//几次 
	for(int z=0;z<t;z++)//次   循环 
	{
		i=0,k=0,m=0;//初始化 
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		while(1)
		{
			minn=a[m];
			flag=0;
			for(int j=m;j<n;j++)
				if(a[j]<minn)minn=a[j],k=j,flag+=1;
			swap(a[m],a[k]);
			m++;
			for(int p=0;p<n;p++)cout<<a[p]<<setw(3);
			cout<<endl;
			if(flag==0)break;
		}
	}
	return 0;
} 
