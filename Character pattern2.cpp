#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n=5;
 
  for(i=1;i<=n;i++)
     {
         for(j=i;j<=n;j++)
         {
             cout<<((char)(i+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}
