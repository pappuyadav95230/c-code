#include<iostream>
using namespace std;
class A
{
int a;
static int b;
public:
A(int x,int y)
{
    a=x; b=y;
}
void show()
{
    cout<<a<<"  "<<b;
}
static void disp()
{
    cout<<b<<endl;//a  is not accessable
}
};
int A ::b=0;
int main()
{
    A a1(33,40),a2(50,60);
    a1.show();
    a2.show();
    A::disp();//withoat obj accessing
   /// a1.show();
}
