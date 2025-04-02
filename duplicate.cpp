#include<iostream> // having an array with duplicate elements . return k that is no.of unique element.
using namespace std;
int duplicate(int*arr,int n){
    int i=0;
    int j=1;
    while(j<n){
        if(arr[i]!=arr[j]){
            i=i+1;
            arr[i]=arr[j];
        }
        j++;
    }
     return i+1;//value of k 

}
int main(){
    int arr[]={1,1,2,2,2,3,4,4,4,4};
    int n=sizeof(arr)/sizeof(int);

    cout<<"value of k is "<<duplicate(arr,n);
}