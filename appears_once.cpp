#include<iostream>
using namespace std;




int main(){

    int array[]={1,1,2,3,4,4,5,6,7,7,6,8};
    int n=12;

    int checkarray[100];
    for(int i=0;i<100;i++){
        checkarray[i]=0;
    }

    for(int i=0;i<n;i++){
        checkarray[array[i]]++;
    }

    for(int i=0;i<100;i++){
        if(checkarray[i]==1){
            cout<< i <<endl;
        }
    }

    return 0;
}