#include<bits/stdc++.h>
using namespace std;
int MAXN=5;
int main(){
	int a[MAXN][MAXN]={0},b[MAXN][MAXN]={0},n,add;
	cin>>n;
	string s1("TRANSLATE"),s2("ADD"),s3("OVER"),str;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	while(str!=s3){
		cin>>str;
		if(s1==str){
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					b[j][i]=a[i][j];
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					a[i][j]=b[i][j];
					cout<<a[i][j]<<" ";
				}
				cout<<endl;}
		}
		else if(s2==str){
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++){
					cin>>add;
					a[i][j]+=add;
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
}
