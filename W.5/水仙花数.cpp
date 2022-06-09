#include<iostream>
using namespace std;
int main()
{
	int a,han,ten,num;
	cin>>a;
	if(a<100){cout<<"ERROR"<<endl;return 0;}
	han=a/100;
	ten=(a/10)%10;
	num=a%10;
	if(a==(han*han*han+ten*ten*ten+num*num*num))cout<<"1"<<endl;
	else cout<<"0"<<endl;
	return 0;
}
