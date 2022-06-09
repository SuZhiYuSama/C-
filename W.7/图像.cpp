#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	setiosflags(ios::right);
	for(int i=1;i<=n;i++)
	{
		cout.width(n-i+1);
		for(int c=1;c<=i;c++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
