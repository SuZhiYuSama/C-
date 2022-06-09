#include<bits/stdc++.h>
using namespace std;
int MAXN=100;
int main()
{
	char str1[MAXN]="",str2[MAXN]="",newstr[6]="";
	int t;
	cin>>t;
	while(t--){
		scanf("%s\n%s",str1,str2);
		for(int i=0;i<3;i++)newstr[i]=str1[i];
		for(int i=0;i<3;i++)newstr[i+3]=str2[strlen(str2)-3+i];
		for(int i=0;i<6;i++)cout<<newstr[i];
		cout<<endl;}
	return 0;
}
