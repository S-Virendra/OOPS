#include<iostream>
using namespace std;
bool check(int n){
    if(n>0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<check(n);
}