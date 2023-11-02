#include<iostream>
using namespace std;
class A
{
    public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
};
class B
{
    public:
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
};
class C : public A, public B
{
    public:
    void weep()
    {
        cout<<"Weeping"<<endl;
    }
};
int main()
{
    C c1;
    c1.eat();
    c1.sleep();
    c1.weep();
    return 0;
}