#include<iostream>
using namespace std;
double area(int r){
    double area=1;
     area=3.14*r*r;
     return area;
}
int main(){
    int r;
    cin>>r;
    cout<<area(r);
}