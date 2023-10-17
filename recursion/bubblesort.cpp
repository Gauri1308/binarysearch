#include<iostream>
using namespace std;

void bubblesort(int array[],int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
       
            if(array[i]>array[i+1]){
                swap(array[i],array[i+1]);
            }
        }
    

   bubblesort(array,n-1);
   }





int main(){
    int arr[5]={3,5,2,1,0};
    bubblesort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}