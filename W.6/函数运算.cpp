#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
	cout.setf(ios::fixed);
	int a;
	cin>>a;
	double num[a];
	for(int i=0;i<a;i++)
	cin>>num[i];
	for(int c=0;c<a;c++)
	{
		if(num[c]<0)cout<<setprecision(2)<<fabs(num[c])<<endl;
		else if(num[c]<1)cout<<setprecision(2)<<sin(2*num[c])<<endl;
		else if(num[c]<5)cout<<setprecision(2)<<sqrt(num[c]*num[c]*num[c]+num[c])<<endl;
		else cout<<setprecision(2)<<2*num[c]+10<<endl;
	}
	return 0;
} 
