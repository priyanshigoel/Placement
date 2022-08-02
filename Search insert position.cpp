#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,a[100];
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if((a[i]==t)||(t<a[i])){
			cout<<i;
			break;
			
		}
	}
	
}
