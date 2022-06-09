#include<bits/stdc++.h>
using namespace std;
int MAXN=20;
int main(){
	int a[MAXN][MAXN]={1},n;
	cin>>n;
	for(int i=0;i<MAXN;i++)
		for(int j=0;j<=i;j++){
			if(i==j)a[i][j]=1;
			else {if(j==0)a[i][j]=1;
					else a[i][j]=a[i-1][j-1]+a[i-1][j];}
		}
	for(int i=0;i<n;i++){
		cout<<setw(n-i);
		for(int j=0;j<=i;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;}
	return 0;
}
