#include<bits/stdc++.h>
using namespace std;
int isdaffodil(int n);
int main(){
	int i;
	for(i=0;i<=10000;i++){
		if(isdaffodil(i))cout<<i<<" ";}
	return 0;}
int isdaffodil(int n){
	int a,b,c;
	if(n<100||n>999)return 0;
	else {
		a=n/100,b=(n%100)/10,c=n%10;
		if(a*a*a+b*b*b+c*c*c==n)return 1;
		else return 0;}}
