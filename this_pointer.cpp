#include<iostream>
using namespace std;
class A
{
int a;  //instance variablr
public:
void get(int a)  // local variabl
{
    this->a=a;
}
void show()
{
cout<<"value of a is:"<<a;
}
};
int main()
{
    A a1;
    a1.get(35);
    a1.show();
}