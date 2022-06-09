#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long q(int x);
	cin>>n;
	cout<<q(n)<<endl;
	return 0;
}
long q(int x)
{
	if(x==1)return 1;
	else return (q(x-1)+1)*2;
}
