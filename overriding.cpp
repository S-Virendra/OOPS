#include<iostream>
using namespace std;
class A{
    public:
    int num=10;
    void Print(){
        cout<<"Print A";
    }
};
 class B:public A{
    public:
 void Print(){
    cout<<"Print B";
 }

 };
 int main(){
    B b1;
    b1.Print();
    A a1;
    a1.Print();
 }