/*#include<iostream>
using namespace std;
class A
{
 int a,b;
 public:
 void rupesh()
 {
     cout<<"Enter the value:"<<endl;
     cin>>a>>b;
 }
 friend void mul(A a1);
};
void mul(A a1)
{
    int c;
    c=a1.a*a1.b;
    cout<<"multiply:"<<c;
}
int main()
{
    A a2;
    a2.rupesh();
    mul(a2);
    return 0;
}*/

/*#include<iostream>
using namespace std;
class data
{
    string name;
    int id;
    int salary;
    friend void display(data);
    public:
    void insert()
    {
        cout<<"Name"<<endl;
        cin>>name;
        cout<<"id"<<endl;
        cin>>id;
        cout<<"salary"<<endl;
        cin>>salary;
    }
};
void display(data a)
{
    cout<<a.name<<endl;
    cout<<a.id<<endl;
    cout<<a.salary<<endl;
}
int main()
{
    data a;
    a.insert();
    display(a);
}*/

#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    friend void display(student);
};
void display(student a)
{
    cout<<a.name<<endl<<a.rollno;
}
int main()
{
    student a;
    a.name="pappu";
    a.rollno=2007542;
    display(a);
}
