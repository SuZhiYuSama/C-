#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char c1,c2,c3,c4,c5;
	int i;
	cout<<"请输入你要加密的信息"<<endl;
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	cout<<"加密完成"<<endl<<"加密后信息为:"<<endl;
	printf("%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4); 
	return 0;
 } 
