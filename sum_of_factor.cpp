#include<iostream>
using namespace std;
int sum(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
        sum=sum+i;
        
    }
}
 return sum;

}
int main(){
    int a;
    cin>>a;
    cout<<sum(a);
}