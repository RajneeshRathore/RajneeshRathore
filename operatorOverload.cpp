#include<iostream>
#include<cstdbool>
using namespace std;

class Complex
{
   private:
   int real;
   int img;
   public:
   Complex(){}
   Complex(int real,int img)
   {
    this->real=real;
    this->img=img;
   }
   Complex operator+(Complex &obj)
   {
       Complex c3;
       c3.real=this->real+obj.real;
       c3.img=this->img+obj.img;
       return c3;
   }
    Complex operator-(Complex &obj)
   {
       Complex c3;
       c3.real=this->real-obj.real;
       c3.img=this->img-obj.img;
       return c3;
   }
    bool operator==(Complex &obj)
   {
       return(this->real==obj.real);
   }
   
   void display()
   {
    cout<<"the complex : "<<real<<"+"<<img<<"i"<<endl;
   }
   void display1()
   {
     cout<<"the complex : "<<real<<"-"<<img<<"i"<<endl;
   }
};
int main()
{
    Complex c1(2,4),c2(3,5);
    Complex c3;
    c1.display1();
    c2.display1();
    c3=c1-c2;
    c3.display1();
    return 0;
}