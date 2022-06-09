#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=0;
	float sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)\
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]>max)max=a[i];
	}
	cout<<"平均值为"<<sum/n<<endl;
	cout<<"最大值为"<<max<<endl;
	return 0;
}
