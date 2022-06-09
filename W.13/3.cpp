#include<bits/stdc++.h>
using namespace std;
const int M=3,N=3;
void madd(double a[M][N],double b[M][N],double c[M][N]);
int main(){
	double sz1[M][N]={0},sz2[M][N]={0},sz3[M][N]={0};
	for(int i=0;i<M;i++)for(int j=0;j<N;j++)cin>>sz1[i][j];
	for(int i=0;i<M;i++)for(int j=0;j<N;j++)cin>>sz2[i][j];
	madd(sz1,sz2,sz3);
	return 0;}
void madd(double a[M][N],double b[M][N],double c[M][N]){
	for(int i=0;i<M;i++)for(int j=0;j<N;j++)c[i][j]=a[i][j]+b[i][j];
	for(int i=0;i<M;i++){
	for(int j=0;j<N;j++)cout<<c[i][j]<<" ";
	cout<<endl;}}
