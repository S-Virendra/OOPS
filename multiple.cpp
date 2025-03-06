#include<iostream>
using namespace std;
class A{                 
    public:
void print(){
    cout<<"classA";
}
};
class B{       
    public:
void display(){
    cout<<"classB";
}

};
class C:public A,public B{
    public:
void result(){

    cout<<"classC";
}
};
int main(){
C c1;
c1.display();
c1.print();
c1.result();

}


