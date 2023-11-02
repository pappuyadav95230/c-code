#include<iostream>
using namespace std;
class car
{
    private:
    int carnumber;
    char carmode1[10];
    public:
    void getdata()
    {
        cout<<"enter car number:";
        cin>>carnumber;
        cout<<"\n enter car mode1:";
        cin>>carmode1;

    }
    void showdata()
    {
        cout<<"car number is"<<carnumber;
        cout<<"\n car mode1 is"<<carmode1;
    }
    };
    int main()
    {
        car c1;
        c1.getdata();
        c1.showdata();
        return 0;
    }