#include<iostream>
using namespace std;
int sum=0;
int factorial(int n){
  int ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*i;
  }
  return ans;
  
}
int strongNumber(int n){
   // int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+ factorial(digit);
        n=n/10;
    }
   // return sum;
}
void check(int n){
    if(strongNumber(n)==sum){
        cout<<"yes";
    }
   else{
    cout<<"no";
   }
}
    
    

    

int main(){
   int n;
   cin>>n;
   check(n);
  

}