//              FUNTION OF PROGRAM.

// (1)Write the program of add using function.
// #include <iostream>
// using namespace std;
// void add(void);
// main()
// {
//     add();
// }
// void add(void)
// {
//     int a, b;
//     cout << "Enter two number: " << endl;
//     cin >> a >> b;
//     cout << "sum of two number is: " << a + b;
// }



//(2.) Write the program of mul.
// #include <iostream>
// using namespace std;
// void mul(void);
// main()
// {
//     mul();
// }
// void mul(void)
// {
//     int a, b;
//     cout << "Enter two number: " << endl;
//     cin >> a >> b;
//     cout << "mul of two number is: " << a * b;
// }

//(3.) Write the program of sub of two number.
// #include <iostream>
// using namespace std;
// void sub(void);
// main()
// {
//     sub();
// }
// void sub(void)
// {
//     int a, b;
//     cout << "Enter two number: " << endl;
//     cin >> a >> b;
//     cout << "sub of two number: " << a - b;
// }



#include <iostream>
using namespace std;
void sum(void);
void mul(void);
void sub(void);
void cube(void);
main()
{
    sum();
    mul();
    sub();
    cube();
}
void sum(void)
{
    int a, b;
    cout << "Enter the two number: " << endl;
    cin >> a >> b;
    cout << "Sum of two number is: " << a + b << endl;
}
void mul(void)
{
    int a, b;
    cout << "Enter the two number: " << endl;
    cin >> a >> b;
    cout << "mul of two number is: " << a * b << endl;
}
void sub(void)
{
    int a, b;
    cout << "Enter the two number: " << endl;
    cin >> a >> b;
    cout << "sub of two number is: " << a - b << endl;
}

void cube(void)
{
    int a, b, c;
    cout << "Enter the three number: " << endl;
    cin >> a >> b >> c;
    cout << "cube of two number is: " << a * b * c << endl;
}
