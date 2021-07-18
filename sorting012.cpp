#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,0,0,1,0,2,1,0,2};
    int n=10;
    int temp;
    int ct1=0,ct2=0,ct3=0;
    for(int i=0;i<n;i++){
       if(a[i]==0){
           ct1++;
       }
       else if(a[i]==1){
           ct2++;
       }
       else if(a[i]==2){
           ct3++;
       }
        
    }
    for(int i=0;i<ct1+ct2;i++){
        a[i]=0;
        
    }
    for(int i=ct1;i<ct2+ct1;i++){
        a[i]=1;
    }
    for(int i=ct2+ct1;i<n;i++){
        a[i]=2;
    }
}