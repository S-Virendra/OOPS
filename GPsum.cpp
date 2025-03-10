#include<iostream>
using namespace std;
int sumofgp(int a,int r,int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+a;
        a=a*r;


    }
    return sum;

}
int main(){
    int a;
    int r;
    int n;
    cin>>a>>r>>n;
    cout<<sumofgp(a,r,n);

}