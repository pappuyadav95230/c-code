// #include <iostream>
// using namespace std;
// int f(int n)
// {
//     if (n==0)
//     return 1;
//     else
//     return(n*f(n-1));

// }
// int main()
// {
//     cout<<f(6);
// }

#include <iostream>
using namespace std;
int m1(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * m1(n - 1);
}
int main()
{
    int n, f;
    cout << "Enter the number:";
    cin >> n;
    f = m1(n);
    cout << "Factorial is: " << f;
}