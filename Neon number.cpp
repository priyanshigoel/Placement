#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x,a=0,y,r;
    cin>>y;
    x=y*y;
  while(x!=0) {
        r=x%10;
        a=a+r;
        x=x/10;
    }
    if(a==y)
        cout<<"neon no";
    else
        cout<<"not neon no."; 
}

