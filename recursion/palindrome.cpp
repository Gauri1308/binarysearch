#include<iostream>
using namespace std;

bool checkpalin(int i,int j,string s){
    if(i>=j){
        return true;

    }
    if(s[i]!=s[j]){
        return false;
    }

    else{
    return checkpalin(i+1,j-1,s);
    
    }
 return 0;
}
int main(){
    string g="bookfoob";
     bool ans=checkpalin(0,g.length()-1,g);
     if(ans){
        cout<<"it is palin"<<endl;
     }
     else{
        cout<<"not a palin"<<endl;
     }

     return 0;
}