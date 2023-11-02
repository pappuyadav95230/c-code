#include<iostream>
using namespace std;
class A
{
    public:
    void get()
{
    cout<<"hello"<<endl;
}
};
class B:virtual public A
{
    public:
    void fun()
    {
        cout<<"i am"<<endl;
    }
};
class C: virtual public A
{
    public:
    void pashu()
    {
        cout<<"pappu"<<endl;
    }
};
class D: public B,public C
{
    public:
    void raje()
    {
        cout<<"kumar"<<endl;
    }
};
int main()
{
    D d1;
    d1.get();
    d1.fun();
    d1.pashu();
    d1.raje();
    return 0;

}