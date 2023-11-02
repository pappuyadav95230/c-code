//A constructor that accepts no parameters is called defult constructor.

/*#include<iostream>
using namespace std;
class B
{
    public:
    int a=100;
    B()
    {
        cout<<a;
    }
};
int main()
{
B a1;
}*/

#include <iostream>
using namespace std;
class A
{
private:
    int a;
    public:
    A()
    {
      a=10;
      cout<<a;  
    }
};
int main()
{
    A a1;
}