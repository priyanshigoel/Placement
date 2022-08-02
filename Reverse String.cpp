 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int i,s[100],n;
    cin>>n;
    for(i=0;i<n;i++)
    	cin>>s[i];
    for(i=0;i<n/2;i++){
        if(i!=n-i-1)
            swap(s[i],s[n-i-1]);
    }
       for(i=0;i<n;i++)
           cout<<s[i]<<" ";
}
