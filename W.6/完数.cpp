#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,s=0;//n是范围，s是因子和， 
	cin>>n;
	for(long i=2;i<=n;i++)//一重循环是要求证是完数的数 
	{
		for(long c=1;c<=i/2;c++)//二重循环找因子 
		{
			if(i%c==0)s=s+c;//是因子就加求和
		}
		if(s==i)//求和完毕相等则为完数 
		{
		cout<<s<<" 101its factors are";//输出完数 
		for(long j=1;j<=s/2;j++)//求完数因子并输出 
		{
			if(s%j==0)cout<<setw(5)<<j;
		}
		cout<<endl;//一个完数求完换行 
		}
		s=0; //重置和 
	}
	return 0;
}
