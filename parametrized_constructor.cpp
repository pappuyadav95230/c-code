/*A constructor that accepts or recive parameter is called paramertrized constructor.
 Syntax:- class_name(para 1, para 2)
{
    -------//code
    -------//code
}*/

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
    int show()
    {
        cout << a << "  " << b;
    }
};
int main()
{
    A a1(5, 6);
    a1.show();
}*/

#include<iostream>
using namespace std;
class team
{
    private:
    int a,b;
    public:
    team(int x,int y)
    {
        a=x;
        b=y;
        cout<<a<<"  "<<b;
    }

};
int main()
{
team t1(5,45);
}