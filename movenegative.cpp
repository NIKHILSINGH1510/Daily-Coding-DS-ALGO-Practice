#include<iostream>
using namespace std;


int main(){

    int a[]={1,2,-3,-5,-9,-4,3,-10,33,4};
    int n=10;
    int temp=0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]<0){
            if(i!=temp){
                swap(a[i],a[temp]);
                temp++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
 return 0;   
}