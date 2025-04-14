#include<iostream>
using namespace std;
int maxsumsubarray(int*arr,int n){
    int maxsum= INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int currsum=0;
            for(int k=i;k<=j;k++){
               currsum=currsum+arr[k];
            }
            maxsum=max(maxsum,currsum);
        }
       
    }
    return maxsum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
  cout<<  maxsumsubarray(arr,n);
}