#include <iostream>
using namespace std;
class A
{
public:
    void fun()
    {
        cout << "Rupesh is good boy" << endl;
    }
};
class B : public A
{
public:
    void get()
    {
        cout << "pashu is good man" << endl;
    }
};
class c : public A
{
public:
    void data()
    {
        cout << "Abhishek is good " << endl;
    }
};
class D: public A
{
    public:
    void show()
    {
        cout<<"rajan is heandsome boy"<<endl;
    }
};
int main()
{
    c d1;
    d1.data();
    d1.fun();
    return 0;

}