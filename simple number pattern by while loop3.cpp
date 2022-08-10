#include <iostream>
using namespace std;
 int main()
{
    int i = 1, j = 1, n ;
   int num=1;
   cin>>n;
    while (i <= n) {
        while (j<=i - 1) {
            cout <<j<< " ";
            j++;
        }
       j = 1;
        i++;   
        cout << endl;
    }
    return 0;
}
