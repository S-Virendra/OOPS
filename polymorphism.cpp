#include<iostream>
using namespace std;
class A{
    public:
    string name="Rohit";
    void Print(int a){
        cout<<"function1";
    }
    void Print(int a,int b){
        cout<<"functon2";
    }
};
   int main(){
    A a1;
    a1.Print(5);
   }