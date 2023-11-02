#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void sum();
    void mul();
};
void A::sum()
{ 
    cout<<"Enter the value of a and b="<<endl;
    cin >> a >> b;
    cout << "sum of two number=" << a + b<<endl;
}
void A::mul()
{   
    cout<<"Enter the value of a and b="<<endl;
    cin >> a >> b;
    cout << "multipuly of two number is=" << a * b;
}
int main()
{
    A a1;
    a1.sum();
    a1.mul();
}
