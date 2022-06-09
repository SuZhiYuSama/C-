#include<bits/stdc++.h>
using namespace std;
void x2ysolve(float x,float y,float z,float *m,float *n);
int main()
{
	float a,b,c,x1,x2;
	cout<<"ÇëÒÀ´ÎÊäÈëa,b,c"<<endl;
	cin>>a>>b>>c;
	x2ysolve(a,b,c,&x1,&x2);
	printf("x1=%.2f x2=%.2f",x1,x2);
	return 0;
}
void x2ysolve(float x,float y,float z,float *m,float *n)
{
	*m=(-y+sqrt(y*y-4*x*z))/2*x;
	*n=(-y-sqrt(y*y-4*x*z))/2*x;
	return;
}
