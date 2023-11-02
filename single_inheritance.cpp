#include<iostream>
using namespace std;
class A   
{
    public:
    void show()
    {
        cout<<"pappu"<<endl;
    }
};
class B:public A
{
    public:
    void fun()
    {
        cout<<"Rupesh"<<endl;
    }
};
int main()
{
    B b1;
    b1.show();
    b1.fun();
}