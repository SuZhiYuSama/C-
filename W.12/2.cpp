#include<bits/stdc++.h>
using namespace std;
double volume(double x,double y,double z);
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<volume(a,b,c)<<endl;
	return 0;}
double volume(double x,double y,double z){
	return x*y*z;}
