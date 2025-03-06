#include<iostream>
using namespace std;
class Animal{
    public:
void speak(){
    cout<<"speakiing";

}
};
class Dog:public Animal{
public:
void speak(){    // same function name and argument and inheritance (rule) of base class, implementation is different
    cout<<"barking";
}

};
int main(){
    Dog d1;
    d1.speak();
}