#include<iostream>
using namespace std;
class Time
{
    private:
    int h;
    int m;
    int s;
    public:
    Time(){}
    Time(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }
    Time operator+(Time &obj)
    {
       Time t3;
       t3.h=this->h+obj.h;
       t3.m=this->m+obj.m;
       t3.s=this->s+obj.s;
       if(t3.s>=60)
       {
          t3.s-=60;
          t3.m+=1;
       }
       if(t3.m>=60)
       {
        t3.m-=60;
        t3.h+=1;
       }
       return t3;
    }
    void show()
    {
        cout<<"Time : "<<h<<":"<<m<<":"<<s<<endl;
    }
};
int main()
{
    Time t1(12,13,90),t2(13,67,12);
    Time t3=t1+t2;
    t1.show();
    t2.show();
    t3.show();
    return 0;
}