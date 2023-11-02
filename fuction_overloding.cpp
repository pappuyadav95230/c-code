/*#include <iostream>
using namespace std;
class A
{
public:
    int a, b, c;
    void sum(int a, int b)
    {   
        
        cout << a + b << endl;
    }
    void sum(int a, int b, int c)
    {   
        
        cout << a + b + c << endl;
    }
};
int main()
{
    A a1, a2;
    a1.sum(5,6);
    a2.sum(7,6,8);
}*/

#include<iostream>
using namespace std;
class pappu
{
    public:
 int mul(int a,int b)
 {
    return a*b;
 }
 int mul(int a,int b,int c)
 {
     return a*b*c;
 }
};
int main (void)
{
    pappu a1;
    cout<<a1.mul(20,30)<<endl;
    cout<<a1.mul(20,2,3)<<endl;
    return 0;
}