/*#include<iostream>
using namespace std;
class A
{
private:
int a,b;
public:
void sum()
{
    cin>>a>>b;
    cout<<"sum:"<<a+b;
}
void mul()
{
    cin>>a>>b;
    cout<<"mul:"<<a*b;
}
};
int main()
{
A a1,a2;
a1.sum();
a2.mul();
}*/

#include<iostream>
using namespace std;
class A
{
private:
int a,b;
public:
void sum()
{
    cout<<"Enter the two number:"<<endl;
    cin>>a>>b;
    cout<<"sum of two number is:"<<a+b<<endl;
}
void mul()
{   
    cout<<"Enter the two number:"<<endl;
    cin>>a>>b;
    cout<<"mul of two number:"<<a*b;
}
};
int main()
{
A a1,a2;
a1.sum();
a2.mul();
}