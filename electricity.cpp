#include<iostream>
using namespace std;

class elect
{
  private:
  int unit;
  string name;
  public:
  elect(){}
  elect(int unit,string name)
  {
    this->name=name;
    this->unit=unit;
  }
  double charge()
  {
    if(unit<=100)
    {
        return(0.6*unit+50);
    }
    if(unit>100 && unit<=300)
    {
        return(0.6*100+0.8*(unit-100)+50);
    }
    else
    {
       double amount=(0.6*100+0.8*200+0.9*(unit-300)+50);
       return(amount+amount*(15/100));
    }
  }
  void show()
  {
    cout<<"Name : "<<name<<endl<<"charge : "<<charge()<<endl;
  }
};
int main()
{
    elect e1(200,"rajneesh");
    e1.charge();
    e1.show();
    return 0;
}