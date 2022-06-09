#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000;
void erase(char s[],char c);
int mystrlen(char a[]);
int main(){
	char mystr[MAXN]={0},character,m;
	int i=0;
	while((m=getchar())!='\n')mystr[i]=m,i++;
	cin>>character;
	erase(mystr,character);
	return 0;}
void erase(char s[],char c){
	int flag=0;
	for(int i=0;i<mystrlen(s);i++){
		if(s[i]==c){
			for(int j=i;j>-1;j++){
			s[j]=s[j+1];
			if(s[j]=='\n')break;}}}
	for(int i=0;i<mystrlen(s);i++)cout<<s[i];}
int mystrlen(char a[]){
	int sum=0;
	for(int i=0;i<MAXN;i++)if(a[i]>32&&a[i]<126)sum++;
	return sum;}
