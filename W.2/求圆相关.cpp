#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	float r,h,Cl,Sa,Sb,Va,Vb;
	cout<<"ÇëÒÀ´ÎÊäÈërÓëh"<<endl;
	cin>>r>>h;
	Cl=2*PI*r;
	Sa=PI*r*r;
	Va=4*PI*r*r*r/3;
	Sb=4*PI*r*r;
	Vb=Sa*h;
	printf("Cl=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n",Cl,Sa,Sb,Va,Vb);
	return 0;
}
