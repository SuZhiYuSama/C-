#include<bits/stdc++.h>
using namespace std;
int MAXN=31;
int main(){
	int t,sum;
	char str[MAXN]="";
	cin>>t;
	while(t--){
		scanf("%s",str);
		sum=0;
		for(int i=0;i<31;i++)if(str[i]>32&&str[i]<126)sum++;
		cout<<sum<<endl;}
	return 0;}
