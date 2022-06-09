#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"请依次输入确诊数与死亡数"<<endl;
	cin>>a>>b;
	c=b/a*100;
	printf("死亡率为 %.3f%%\n",c);
	return 0;
}
