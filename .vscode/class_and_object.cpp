/*
(1.)
#include<iostream>
using namespace std;
class student
{
private:
int a,b;
public:
void pappu()
{
    cout<<"enter the value";
    cin>>a>>b;

}
void show()
{
    cout<<a<<" "<<b;

}
};
int main()
{
    student a1;
    a1.pappu();
    a1.show();
}

(2.)*/

#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    int mul()
    {
        cout<<"Enter the two number:"<<endl;
        cin>>a>>b;
        cout<<"mul of a and b is:" << a * b;
    }
};
int main()
{
    A a1;
    a1.mul();
}

/*(3.)

#include<iostream>
using namespace std;
class pappu 
{
    public:
    int a,b;
    int sum()
    {
        cin>>a>>b;
        cout<<a+b;
 }
};
int main()
{
pappu a1;
a1.sum();
}*/
