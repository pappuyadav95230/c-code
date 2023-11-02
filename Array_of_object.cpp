#include<iostream>
using namespace std;
class A
{
    int id,salary;
    char name[50];
    public:
void input()
    {
  cout<<"Enter the employee detail"<<endl;
  cin>>id>>name>>salary;
    }
    void show()
{
    cout<<"Enter employee name"<<name<<endl;
    cout<<"Enter employe id"<<id<<endl;
    cout<<"Enter employe salary"<<salary<<endl;
    }
};
int main()
{
    A a1[3];
    int i;
    for(i=0; i<3; i++)
    {
        a1[i].input();
    }
    for(i=0; i<3; i++)
    {
        a1[i].show();
    }
    return 0;
}