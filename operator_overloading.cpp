// returnType operator opSymbol(){....}
 #include<iostream>
 using namespace std;
 class Complex{
    public:
    int real;
    int img;
    
    Complex(int r,int i){
        real=r;
        img=i;

    }
    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;

    }
    //operator overloading
    void operator +(Complex &c2){
        int resReal= this-> real+c2.real;
        int resImg= this->img+c2.img;
        Complex c3(resReal,resImg);
        c3.showNum();
    }
 };
 int main(){
    Complex c1(2,3);
c1.showNum();
 
 Complex c2(4,5);
 c2.showNum();
 c1+c2;
 }