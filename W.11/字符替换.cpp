#include<bits/stdc++.h>
using namespace std;
int MAXN=1000;
int main(){
	char str[MAXN]="";
	while(scanf("%s",str)!=EOF){
		if(getchar()==10){
			for(int i=0;str[i]!='\0';i++){
				if(str[i]=='y'&&str[i+1]=='o'&&str[i+2]=='u'){
					str[i]='w',str[i+1]='e';
					for(int j=i+2;str[j]!='\0';j++){
						str[j]=str[j+1];}}}
			for(int i=0;str[i]!='\0';i++)cout<<str[i];}}
	return 0;}
