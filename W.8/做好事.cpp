#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a1,a2,a3,a4,a[4];
 for (int i=0;i<4;i++) 
 {
  int t=0;
  a1=a2=a3=a4=0;
  switch (i)
  {
   case 0:a1=1;break;
   case 1:a2=1;break;
   case 2:a3=1;break;
   case 3:a4=1;break;
  }
  a[1]=a1==0;
  a[2]=a3==1;
  a[3]=a3==1;
  a[4]=a[3]==0;
  for (int j=1;j<=4;j++) if (a[j]==0) t++;
  if (t==1) printf("%c",i+'A');
 }
 return 0;
}
