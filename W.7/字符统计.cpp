#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sz=0,fh=0,zm=0,kg=0,n;
	while(1)
	{
		n=getchar();
		if(n>=48&&n<=57)sz+=1;
		else if(n>=65&&n<=90||n>=97&&n<=122)zm+=1;
		else if(n==32)kg+=1;
		else if(n==10)break;
		else if(n!=13)fh+=1;
	}
	cout<<zm<<setw(5)<<sz<<setw(5)<<kg<<setw(5)<<fh<<endl;
	return 0;
}
