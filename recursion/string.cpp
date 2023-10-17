#include<iostream>
#include<string>
using namespace std;

string reverse(int i,int j,string s){
    cout<<s<<endl;
    //base case
    if(i>=j){
        return s;
    }

    swap(s[i],s[j]);
    
    string n=reverse(i+1,j-1,s);

    return n;
}

int main(){
    string g="gauri";
    string w=reverse(0,g.length()-1,g);
    cout<<"string is "<<w<<endl;
}