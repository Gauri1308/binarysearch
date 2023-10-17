//array is sorted or not

#include<iostream>
using namespace std;

bool issorted(int arr[],int size){

    //base case
    if(size==0||size==1){
        return true;
    }
    

    //rr
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart= issorted(arr+1,size-1);
        return remainingpart;
    }

}

 int main(){
    int arr[5]={1,2,3,4,5};
    bool ans= issorted(arr,5);

    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
 }
    