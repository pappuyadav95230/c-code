#include<iostream>
using namespace std;
class A 
{
    public:
    int a;
    void sum(A a1)
    {
        a=a+a1.a;
    }
};
int main()
{
    A a1,a2;
    a1.a=50;
    a2.a=100;
    cout<<"Starting value"<<endl;
    cout<<a1.a<<endl;
    cout<<a2.a<<endl;

    a2.sum(a1);
    cout<<"changed value"<<endl;
    cout<<a1.a<<endl;
    cout<<a2.a<<endl;
}