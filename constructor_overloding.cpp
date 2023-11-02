#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c;
    A(int a,int b)
    {
        cout<<a+b<<endl;
    }
    A(int a,int b,int c)
    {
        cout<<a*b*c;
    }
};
int main()
{
A a1(5,6),a2(4,2,3);
}