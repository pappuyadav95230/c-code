// A copy constructor that is used to copy or initialize the value of one object into another object is called copy constructor.

/*#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    A(A &y)
    {
        a = y.a;
        b = y.b;
    }
    void show()
    {
        cout <<a<< " " << b << endl;
    }
};
int main()
{
    A a1(45,12);
    A a2=a1;
    a1.show();
    
}*/

#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    A()   // default constructor
    {
        a=9;
    }
    A(int x)  // parametrzed constructor
    {
        a=x;
    }
    A(A &y)  //copy constructor
    {
     a=y.a;
    }
    int show()
    {
        cout<<a<<endl;
    }
};
int main()
{
   A a1;
   A a2(4);
   A a3(a1);
    a1.show();
    a2.show();
    

}