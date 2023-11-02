// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int a, b;
//     int sum()
//     {
//         cin >> a >> b;
//         cout << a + b;
//     }
// };
// int main()
// {
//     student a1;
//     a1.sum();
// }

#include <iostream>
using namespace std;
class student
{
private:
    //int a=5,b=10;
public:
    int id;
    string name;
    int rollno;
    string phonenumber;
    string email;
};
int main()
{
    student a1, a2, a3, a4, a5;
    a1.id = 2021;
    a2.name = "pappu";
    a3.rollno = 2007542;
    a4.phonenumber = "9523076954";
    a5.email = "610490pappu@gmai.com";
    cout << a1.id << endl
         << a2.name << endl
         << a3.rollno << endl
         << a4.phonenumber << endl
         << a5.email << endl;
}