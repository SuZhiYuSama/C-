#include<iostream>
using namespace std;
int main()
{
	int mark,ten;
	cin>>mark;
	ten=mark/10;
	switch(ten)
	{
		case 10 :cout<<"A"<<endl;break;
		case 9 :cout<<"A"<<endl;break;
		case 8 :cout<<"B"<<endl;break;
		case 7 :cout<<"C"<<endl;break;
		case 6 :cout<<"D"<<endl;break;
	}
	if(ten<=5)cout<<"E"<<endl;
	return 0;
}
