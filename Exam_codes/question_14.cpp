/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real,imaginary;
public:
    Complex()
    {}
    Complex(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    Complex operator+(Complex ob);
    Complex operator-(Complex ob);
    Complex operator*(Complex ob);
    void show()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
Complex Complex :: operator+(Complex ob)
{
    Complex temp;
    temp.real=real+ob.real;
    temp.imaginary=imaginary+ob.imaginary;
    return temp;
}
Complex Complex :: operator-(Complex ob)
{
    Complex temp;
    temp.real=real-ob.real;
    temp.imaginary=imaginary-ob.imaginary;
    return temp;
}
Complex Complex ::operator*(Complex ob)
{
    Complex temp;
    temp.real=real*ob.real-imaginary*ob.imaginary;// real = real * real -img*img
    temp.imaginary=imaginary*ob.real+real*ob.imaginary;//imaginary = img*real + real*img;
    return temp;
}
int main()
{
    Complex a(1,2),b(3,4);
    cout<<"Before oparetor overloading: "<<endl;
    a.show();
    b.show();
    cout<<"After oparetor overloading: "<<endl;
    cout<<"Sum: "<<endl;
    Complex c=a+b;//a+b;
    c.show();
    cout<<"Difference: "<<endl;
    c=a-b;
    c.show();
    cout<<"Multiplication: "<<endl;
    c=a*b;
    c.show();
}