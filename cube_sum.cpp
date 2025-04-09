#include<iostream>
using namespace std;
int sum(int n){
    int sum = n * (n + 1) / 2; // Sum of first n natural numbers
    return sum * sum; // Square of the sum
}


int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}