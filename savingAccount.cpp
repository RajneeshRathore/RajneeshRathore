#include<iostream>
using namespace std;

class Saving
{
    private:
    static double annualInst;
    double savingBal;
    public:
    Saving(){}
    Saving(double savingBal)
    {
        this->savingBal=savingBal;
    }
    void calMonthInst()
    {
        double monthInst=(savingBal*annualInst)/12;
        savingBal+=monthInst;
    }
    static void modifyInst(double newInst)
    {
        annualInst=newInst;
    }
    void show()
    {
        cout<<"balance : "<<savingBal<<endl;
    }
};
double Saving::annualInst=0.04;
int main()
{
    Saving s1(2000.00),s2(3000.00);
    s1.calMonthInst();
    s2.calMonthInst();
    s1.show();
    s2.show();
    return 0;
}
