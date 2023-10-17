#include<iostream>
using namespace std;

int serch(int arr[],int s, int e,int k){
    //base case
    if(s>e){
        return -1;

    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
   if(arr[mid]>k){
    return serch(arr,s,mid-1,k);
   }
   if(arr[mid]<k){
    return serch(arr,mid+1,e,k);
   }
   return 0;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int ans=serch(arr,0,4,2);

    cout<<"index is " <<ans<<endl;
}