#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000;
int mystrlen(char a[]);
int main(){
	char mystr[MAXN]={0},c;
	int i=0;
	gets(mystr);
	cout<<mystrlen(mystr)<<endl;
	return 0;}
int mystrlen(char a[]){
	int sum=0;
	for(int i=0;i<MAXN;i++)if(a[i]>31&&a[i]<128)sum++;
	return sum;}
