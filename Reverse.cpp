#include <iostream>
using namespace std;
int main() {
    int x,a,r=0;
    cin>>x;
    while(x!=0)   {
        a=x%10;
        r=r*10+a;
        x=x/10;
    }
 cout<<r;
}
