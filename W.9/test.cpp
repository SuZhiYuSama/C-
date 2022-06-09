#include<bits/stdc++.h>
using namespace std;
int MAXN=20;//最大 
int main()
{
	int t,a[MAXN]={1,3,9,6,5},i,k,minn,m,flag=0;//定义
		k=0,m=0;//初始化
		minn=a[0];
		while(1)
		{
			for(int j=m;j<=4;j++)
			{
				if(a[j]<minn)minn=a[j],k=j,flag+=1;
			}
			swap(a[m],a[k]);
			m++;
			for(int p=0;p<=i;p++)
			cout<<a[p]<<setw(3);
			cout<<endl;
			if(flag==0)break;
		}
}
