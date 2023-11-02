/*#include<iostream>
using namespace std;
class A
{
    private:
    int a=5,b=6;
    public:
    A()
    {
        cout<<"inside the constructor"<<endl;
        cout<<"number 1="<<a<<endl;
        cout<<"number 2="<<b<<endl;
    }
    ~A()
    {
        cout<<"inside destructor";
    }
};
int main()
{
    A a1;
    return 0;
}*/

#include<iostream>
using namespace std;
class A
{
    public:
    int a=10;
    A()
    {
        cout<<a<<endl;
    }
    ~ A()
    {
        cout<<"object destroyed";
    }
};

int main()
{
    A a1;
}