
#include<iostream>
using namespace std;

int power(int a ,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //rr
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    return 0;
}
int main(){
    int a =2;
    int b=12;
    int sol=power(2,12);
    cout<<sol<<endl;

}