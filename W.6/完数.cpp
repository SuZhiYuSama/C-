#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,s=0;//n�Ƿ�Χ��s�����Ӻͣ� 
	cin>>n;
	for(long i=2;i<=n;i++)//һ��ѭ����Ҫ��֤���������� 
	{
		for(long c=1;c<=i/2;c++)//����ѭ�������� 
		{
			if(i%c==0)s=s+c;//�����Ӿͼ����
		}
		if(s==i)//�����������Ϊ���� 
		{
		cout<<s<<" 101its factors are";//������� 
		for(long j=1;j<=s/2;j++)//���������Ӳ���� 
		{
			if(s%j==0)cout<<setw(5)<<j;
		}
		cout<<endl;//һ���������껻�� 
		}
		s=0; //���ú� 
	}
	return 0;
}
