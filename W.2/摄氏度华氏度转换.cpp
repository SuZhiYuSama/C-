#include<iostream>
using namespace std;
int main()
{
	cout<<"请输入摄氏度"<<endl;
	float a,b,c;
	cin>>a;
	b=32+a*1.8;
	printf("对应的华氏度为: %.2f,\n",b);
	return 0;
}
