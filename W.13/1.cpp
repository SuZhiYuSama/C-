#include<bits/stdc++.h>
using namespace std;
const int MAXN=10000;
double avg(double a[],int n);
int main(){
	double sz[MAXN]={0};
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)cin>>sz[i];
	printf("%.2f",avg(sz,n));
	return 0;}
double avg(double a[],int n){
	double sum=0,pj,n1=n;
	for(int i=0;i<n;i++)sum+=a[i];
	pj=sum/n1;
	return pj;}
