#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"百元买百鸡的问题所有可能的解如下："<<endl;
	for(int x=0;x<20;x++)
	{
		for(int y=0;y<33;y++)
		{
			if((100-x-y)%3==0&&5*x+3*y+(100-x-y)/3==100)
				cout<<"公鸡"<<setw(5)<<x<<setw(5)<<"只，母鸡"<<setw(5)<<y<<setw(5)<<"只，小鸡"<<setw(5)<<100-x-y<<setw(5)<<"只"<<endl;
		}
	}
	return 0;
}
