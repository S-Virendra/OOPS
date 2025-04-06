#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        int sum=0;
        if(a%i==0){
            cout<<i<<endl;
        }
    }
}
