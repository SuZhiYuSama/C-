#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"��Ԫ��ټ����������п��ܵĽ����£�"<<endl;
	for(int x=0;x<20;x++)
	{
		for(int y=0;y<33;y++)
		{
			if((100-x-y)%3==0&&5*x+3*y+(100-x-y)/3==100)
				cout<<"����"<<setw(5)<<x<<setw(5)<<"ֻ��ĸ��"<<setw(5)<<y<<setw(5)<<"ֻ��С��"<<setw(5)<<100-x-y<<setw(5)<<"ֻ"<<endl;
		}
	}
	return 0;
}
