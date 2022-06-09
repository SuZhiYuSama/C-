#include<bits/stdc++.h>
using namespace std;
int MAXN=20;
int main(){
	int t,m,n,a[MAXN][MAXN]={0},max,min,x,y,flag;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>a[i][j];
		x=0,y=0,min=a[y][x],flag=0;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++){
				if(min>a[i][j]){
					min=a[i][j],y=i,x=j;}
				if(j==n-1){
					max=min;
					for(int k=0;k<m;k++){
						if(max<a[k][x]&&flag==0){
							cout<<"not found"<<endl;
							break;}
						else if(k==m-1){
							flag++;
							cout<<"["<<y<<"] ["<<x<<"] "<<max<<endl;}}}}}
return 0;}
