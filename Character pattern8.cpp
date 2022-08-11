#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n;
  cin>>n;
  for(i=n;i>=1;i--)
     {
         for(j=1;j<=i;j++)
         {
             cout<<((char)(i+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}
