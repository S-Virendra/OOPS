#include<iostream>
using namespace std;
int main(){
    int arr[]={25,3,12,5,7,2,1,8,25};
    int n=sizeof(arr)/sizeof(int); 
    int count;
    for(int i=0;i<n;i++){
    count=0;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i]){
                count++;}
            
        }
        cout<<arr[i]<<" "<<count+1<<endl;
    }
   

}