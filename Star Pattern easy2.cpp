#include <iostream>
using namespace std;
int main() {
    int i,j,k,l,n=5;
      for(i=1;i<n; i++)  {
        for(l=1;l<=i;l++)
            cout<<"*";
       for(j=1;j<=(n-i)*2;j++)
           cout<<" ";
       for(k=1;k<=i; k++)
           cout<<"*";
       cout<<endl;
    }
 for(i=1;i<=n; i++)    {
        for(l=1;l<=n-i+1;l++)
            cout<<"*";
          for(j=3;j<=i*2;j++)
            cout<<" ";
        for(k=1;k<=n-i+1; k++)
                cout<<"*";
        cout<<endl; 
 }
}
