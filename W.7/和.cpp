#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	double sum=0;
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
	sum+=i;
	for(int i=1;i<=b;i++)
	sum=sum+i*i;
	for(double i=1;i<=c;i++)
	sum=sum+1/i;
	printf("%.2l1f",sum);
	return 0;
} 
