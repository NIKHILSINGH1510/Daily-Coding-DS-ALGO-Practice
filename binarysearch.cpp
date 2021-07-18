#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};

    int low=0,mid=0,high=9;

    int flag=0;
    int element;
    cin>>element;

    while(low<=high){

        mid = (low + high)/2;

        if(array[mid]==element){
            flag = 1;
            break;
        }
        else if (array[mid]>element){
            high = mid-1;
        }
        else if(array[mid]<element){
            low = mid+1;
        }
    }
    if(flag==1){
        cout<<"found at index --> "<<mid;
    }
    else{cout<<"not found";}

    return 0;
}