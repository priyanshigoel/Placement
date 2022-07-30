#include <iostream>
using namespace std;
int main() {
    int x,sum=0;
    cin>>x;
    for(int i=1;i<x;i++)
       if(x%i==0)
            sum=sum+i;
    if(sum==x)
        cout<<"no is perfect no";
    else
        cout<<"not a perfect no";
}
