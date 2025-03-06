#include<iostream>
using namespace std;
class A{                 // single inheritance
    public:
void print(){
    cout<<"classA";
}
};
class B:public A{       //inherting b from a
    public:
void display(){
    cout<<"classB";
}

};
int main(){

    B b1;
    b1.print();
}

