#include<bits/stdc++.h>
using namespace std;
int MAXN=9;
int main(){
	int a[MAXN],x,k;
	for(int i=0;i<MAXN;i++)
		cin>>a[i];
	cin>>x;
	for(int i=0;i<MAXN;i++){
		cout<<a[i]<<endl;
		if((a[i]>x&&a[i+1]<x)||(a[i]<x&&a[i+1]>x))cout<<x<<endl;
	}
	return 0;
}
