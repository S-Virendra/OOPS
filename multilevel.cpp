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
class C: public B{
    public:

void get(){
    
    cout<<"classC";
}

};
int main(){

C c1;
c1.get();
c1.display();
c1.print();

}