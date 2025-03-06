#include<iostream>
using namespace std;
class A{                 
    public:
void print(){
    cout<<"classA";
}
};
class B:public A{       
    public:
void display(){
    cout<<"classB";
}

};
class C:public A{
    public:
void result(){

    cout<<"classC";
}
};
int main(){
C c1;

c1.print();
c1.result();
B b1;
b1.print();
b1.display();

}