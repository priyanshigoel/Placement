#include<iostream>
using namespace std;
int main()
{
        int i, j, cnt;
        cout<<"\n Enter Number of Rows : ";
        cin>>cnt;
        cout<<"\n";
        for(i=0; i<cnt; i++)
        {
                for(j=cnt; j>i; j--)
                {
                        cout<<" * ";
                }
                cout<<"\n";
        }
         return 0;
}
