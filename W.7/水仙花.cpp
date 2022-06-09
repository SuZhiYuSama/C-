#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,g,s,bw;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		g=i%10,s=(i%100)/10,bw=i/100;
		if(i==g*g*g+s*s*s+bw*bw*bw)cout<<i<<setw(5);
	}
	return 0;
}
