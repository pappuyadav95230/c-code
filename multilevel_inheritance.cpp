#include <iostream>
using namespace std;
class A
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};
class B: public A
{
    public:
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
};
class c: public B
{
    public:
    void weep()
    {
        cout<<"weeping"<<endl;
    }
};
int main()
{
    c c1;
    c1.eat();
    c1.sleep();
    c1.weep();
    return 0;
}
