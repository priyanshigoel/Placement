#include<iostream>
using namespace std;
int main()
{
        int bin, p, q, row, x;
        bin=1;
        q=0;
        cout<<"\n Enter Number of Rows : ";
        cin>>row;
        cout<<"\n";
        while(q<row)
        {
                for(p=15-3*q; p>0; --p)
                cout<<" ";
                for(x=0; x<=q; ++x)
                {
                    if((x==0)||(q==0))
                                bin=1;
                        else
                                bin=(bin*(q-x+1))/x;
                        cout<<"      ";
                        cout<<bin;
                }
                cout<<"\n\n";
                ++q;
        }
        return 0;
}
