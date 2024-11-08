#include<iostream>
using namespace std;

class unary
{
    private:
    int x;
    public:
    unary(){}
    unary(int x)
    {
        this->x=x;
    }
    friend void operator-(unary &obj);
    void show()
    {
        cout<<"x = "<<x<<endl;
    }
};
void operator-(unary &obj)
{
    obj.x=obj.x*(-1);
}
int main()
{
    unary u1(10);
    -u1;
    u1.show();
    return 0;
}