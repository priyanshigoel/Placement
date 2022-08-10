#include <iostream>
using namespace std;
 int main()
{
    int i = 1, j = 0, n = 5;
    while (i <= n) {
        while (j<=i - 1) {
            cout <<i << " ";
            j++;
        }
       j = 0;
        i++;   
        cout << endl;
    }
    return 0;
}
