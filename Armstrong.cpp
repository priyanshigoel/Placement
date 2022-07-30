#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x,a=0,y,z,r,count=0;
    cin>>x;
    y=x,z=x;
    while(x!=0) {
        count++;
        x=x/10;
    }
    while(y!=0)   {
        r=y%10;
        a=a+pow(r,count);
 y=y/10;
    }
    if(a==z)
        cout<<"armstrong no";
    else
        cout<<"not an armstrong no.";
}
