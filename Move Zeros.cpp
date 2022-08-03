#include <iostream>
using namespace std;
int main() {
 int j=0,n,nums[100];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
        }
        }
         for(int i=0;i<n;i++){
             cout<<nums[i];
         }
}
