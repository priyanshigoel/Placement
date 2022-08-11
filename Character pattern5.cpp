#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n=5;
 
    for(i=1;i<=n;i++)
     {
         for(j=i;j>=1;j--)
         {
             cout<<((char)(j+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}
