#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(8);
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
      cout<<*itr<<" ";

    }

}