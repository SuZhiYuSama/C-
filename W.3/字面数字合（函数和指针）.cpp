#include<iostream>
using namespace std;
void qiuhe(int *x); 
int main()
{
	int n;
	cout<<"ÇëÊäÈëÊý×Ö"<<endl;
	cin>>n;
	qiuhe(&n);
	cout<<n<<endl;
	return 0;
}
void qiuhe(int *x)
{
	int a,b,c;
	a=*x%10,b=(*x/10)%10,c=*x/100;
	*x=a+b+c;
	return;
}
