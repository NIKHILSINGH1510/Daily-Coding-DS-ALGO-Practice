#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int conv(int array[],int n){
    int num=0;
    for (int i = n; i >=0; i--)
    {
        num= num + (pow(10,(i-1))*array[n-i]);
    }
    return num;

}



// int plusone(int array,int n){

// }




int main(){
    int array[]={1,2,4};
    int size=3;
    cout<<conv(array,size);

    return 0;
}