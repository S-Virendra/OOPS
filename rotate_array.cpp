#include<iostream>
using namespace std;
void reverse(int*arr,int i,int j){
    int temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void rotate(int*arr,int n,int k){
    k=k%n;// if k bada ho gya n se to lagana hai
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    
    rotate(arr,n,k);
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    
}