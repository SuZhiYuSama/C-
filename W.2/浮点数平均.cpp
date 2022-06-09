#include<iostream>
using namespace std;
int main()
{
	float a,b,c,sum;
	cout<<"请输入三个浮点数"<<endl;
	cin>>a>>b>>c;
	sum=a+b+c;
	printf("平均值为 %.2f \n",sum/3) ;
	return 0;
}
