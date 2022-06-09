#include<bits/stdc++.h>
using namespace std;
int MAXN=3;
int main(){
	int a[MAXN][MAXN]={0},sum1=0,sum2=0;
	for(int i=0;i<MAXN;i++)
		for(int j=0;j<MAXN;j++){
			cin>>a[i][j];
			if(i==j)sum1+=a[i][j];
			if(i+j==2)sum2+=a[i][j];
		}
	cout<<sum1<<setw(3)<<sum2<<endl;
	return 0;
}
