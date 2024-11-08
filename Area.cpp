#include<iostream>
using namespace std;

class Area
{
   public:
   Area(){}
  double area(float side)
   {
      return(side*side);
   }
   double area(int len,int bre)
   {
     return(len*bre);
   }
   double area(double base,double heigth)
   {
     return(0.5*base*heigth);
   }
};
int main()
{
    Area a1;
    cout<<"area of square : "<<a1.area(4.0)<<endl;
    cout<<"area of rectangle : "<<a1.area(2,2)<<endl;
    cout<<"area of triangle : "<<a1.area(4.00,5.00)<<endl;
    return 0;
}