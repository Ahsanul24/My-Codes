/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include <bits/stdc++.h>
using namespace std;
class overload
{
    int x, y;
public:
    overload()
    {}
    overload(int i, int j)
    {
        x = i;
        y = j;
    }
    overload operator+(overload ob2);
    overload operator-(overload ob2);
    overload operator=(overload ob2);
    void show()
    {
        cout<<"Val of X: "<<x<<" and Val of Y: "<<y<<endl;
    }
};
overload overload ::operator+(overload ob2)
{
    overload temp;
    temp.x = x + ob2.x;//ob1+ob2
    temp.y = y + ob2.y;
    return temp;
    // x+=ob2.x;
    // y+=ob2.y;
    // return *this;
}
overload overload ::operator-(overload ob2)
{
    overload temp;
    temp.x = x-ob2.x;
    temp.y =y- ob2.y;
    return temp;
}
overload overload ::operator=(overload ob2)
{
    x = ob2.x;
    y = ob2.y;
    return *this;
}
int main()
{
    overload a(10,20),b(30,40),c;
    cout<<"Sum:"<<endl;
    c=a+b;
    c.show();
    cout<<"Difference: "<<endl;
    c=b-a;
    c.show();
    cout<<"Assingment:"<<endl;
    a=b;
    a.show();
}