#include<iostream>
using namespace std;
class Student{
    public:    //access modifier 

  string name;//data member
  float cgpa;//data member
  void getPercentage(){      // member functoin or methods
    cout<<cgpa*10;
  }

};
int main(){
    Student s1;   //s1(object) ke pass sara kuch aa gya jo student class me hai
    s1.name="rohit";
    cout<<s1.name<<endl;
    s1.cgpa=8.6;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();

}


