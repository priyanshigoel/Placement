#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,n,next=0;
    cin>>n;
    cout<<a<<","<<b<<",";
    next=a+b;
    while(next<=n){
        cout<<next<<",";
        a=b;
        b=next;
        next=a+b;
    }
}
