/*#include<iostream>
using namespace std;
void pappu(int data);
int main()
{
    int data=5;
    pappu(data);
    cout<<"value of the data is:"<<data<<endl;
    return 0;
}
void pappu(int data)
{
    data=5;
}*/

#include <iostream>
using namespace std;
void student(int *x, int *y)
{
    int student;
    student = *x;
    *x = *y;
    *y = student;
}
int main()
{
    int x = 500, y = 100;
    student(&x, &y);
    cout << "value of x is:" << x << endl;
    cout << "value of y is:" << y << endl;
    return 0;
}