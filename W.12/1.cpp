#include<bits/stdc++.h>
using namespace std;
int isprime(int x);
int main() {
	int n,i;
	for(i=2;i<=100;i++){
		if(isprime(i))cout<<i<<" ";}
	return 0;}
int isprime(int x){
	int flag=0;
	for(int j=2;j<=x;j++){
		if(x%j==0)flag++;}
	if(flag==1)return 1;
	else return 0;}
