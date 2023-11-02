#include<iostream>
using namespace std;
class A
{   
    public:
    int a;
    A sum(A a1,A a2)
    {   
        A A3;
        A3.a=a2.a+a1.a;
        return(A3);
    }
};
int main()
{
    A a1,a2,a3;
    a1.a=50;
    a2.a=100;
    a3.a=150;
    cout<<"Starting value:"<<endl;
    cout<<a1.a<<endl;
    cout<<a2.a<<endl;
    cout<<a3.a<<endl;
    cout<<"changed value"<<endl;
    cout<<a1.a<<endl;
    cout<<a2.a<<endl;
    cout<<a3.a<<endl;
    return 0;
}
