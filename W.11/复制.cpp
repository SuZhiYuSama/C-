#include<bits/stdc++.h>
using namespace std;
int MAXN=20;
int main(){
	int t;
	char a[MAXN]="",b[MAXN]="";
	cin>>t;
	while(t--){
		scanf("%s\n%s",a,b);
		a[0]=0;
		for(int i=0;i<strlen(b);i++)a[i]=b[i];
		for(int i=0;i<strlen(a);i++)cout<<a[i];
		cout<<endl;}
	return 0;}
