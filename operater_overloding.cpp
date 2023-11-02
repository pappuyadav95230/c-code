#include<iostream>
using namespace std;
class A 
{
    public: 
    int a, b,c;
    void sum (int a ,int b)
    {
        cout<<"the addition of a and b is ="<<a+b<<endl;

    }

void sum (int a ,int b , int c)
{
    cout<<"the additon of a ,b and c is "<<a+b+c<< endl;

}
};
int main()
{
A a1 ;
a1.sum(4,3);
a1.sum(4,5,6);
}