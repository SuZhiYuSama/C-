#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
			int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int k=i;
		for(int j=i;j<n;j++){
			if(a[k]>a[j])k=j;
		}
		swap(a[k],a[i]);
		for(int j=0;j<n;j++){
		cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	}

}
