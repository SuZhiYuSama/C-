#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max,mid,min;
	cin>>a>>b>>c;
	max=(a>b?a:b)>c?(a>b?a:b):c;
	min=(a<b?a:b)<c?(a<b?a:b):c;
	mid=(((a>b?a:b)>c?(a>b?a:b):c)==a)?(b>c?b:c):(((a>b?a:b)>c?(a>b?a:b):c)==b?(a>c?a:c):(a>b?a:b));
	cout<<min<<"  "<<mid<<"  "<<max<<endl;
	return 0;
}
