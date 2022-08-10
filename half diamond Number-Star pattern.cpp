#include <iostream>
using namespace std;
void printPattern(int r)
{
    r = r / 2;
    int count = r;
    for (int i = 0; i < r; i++) {
        for (int j = r; j > i; j--) {
            if (j != r) {
                cout << "*" << count;
            }
            else {
                cout << count;
            }
        }
        count--;
        cout << endl;
    }
    count++;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j <= i; j++) {
            if (j != 0) {
                cout << "*" << count;
            }
            else {
                cout << count;
            }
        }
        count++;
        cout << endl;
    }
}
int main()
{
    int n;
     
    n = 6;
     
    printPattern(n);
     
    return 0;
}
