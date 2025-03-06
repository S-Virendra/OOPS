#include<iostream>
using namespace std;
class A{
public:
void print (){
    cout<<"print";
}
void print(int num){
    cout<<num;
}
void print(string name){
    cout<<name;
}
void print(string name,int num){
    cout<<name<<num;
}
};
int main(){
    A a1;
    a1.print("rohit",5);


}