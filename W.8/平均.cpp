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
	cout<<"ƽ��ֵΪ"<<sum/n<<endl;
	cout<<"���ֵΪ"<<max<<endl;
	return 0;
}
