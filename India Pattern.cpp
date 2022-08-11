#include <iostream>
using namespace std;
int main()
{
  int i,j;
  char s[]="INDIA";
 
   for(i=0;s[i];i++)
    {
        for(j=0;j<=i;j++)
        cout<<s[j];
 
     cout<<endl;
     }
 
  return 0;
}
