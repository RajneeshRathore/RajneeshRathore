#include<iostream>
using namespace std;

class tolbooth
{
   private:
   unsigned int toc;
   double toa;
   public:
   tolbooth():toc(0),toa(0){}
   void payingCar()
   {
      toc++;
      toa+=0.5;
   }
   void nonPayingCar()
   {
      toc++;
   }
   void display()
   {
    cout<<"total no. cars : "<<toc<<endl<<"total no. of amount : "<<toa<<endl;
   }
};
int main()
{
    tolbooth t1;
    cout<<"press 1 to count paying car\npress 2 to count non paying car\npress e to exit"<<endl;
    char c;
    do{
       cin>>c;
       switch(c)
       {
        case '1':t1.payingCar();
        break;
        case '2':t1.nonPayingCar();
        break;
        case 'e':t1.display();
        break;
        default:cout<<"invalid input\n";
        break;
       }
 
    }while(c!='e');
}