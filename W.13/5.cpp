#include<bits/stdc++.h>
using namespace std;
int fbnq(int n);
int main(){
	int n;
	cin>>n;
	cout<<fbnq(n)<<endl;
	return 0;
}
int fbnq(int n){
	if(n==1||n==2)return 1;
	else return fbnq(n-1)+fbnq(n-2);
}
