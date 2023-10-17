#include<iostream>
using namespace std;

void insertionsort(int array[] ,int n){
     for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    
    //basecase
    if(n==0||n==1){
        return;
    }

    for(int i=1;i<n;i++){
        
        if(array[i]<array[0]){
        swap(array[i],array[0]);
        }
        }
    insertionsort(array+1,n-1);

    
}

int main(){
    int arr[5]={2,5,7,1,0};
    insertionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}
