/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class Vector
{
    int sz;
    float *vec;
public:
    Vector(int n)
    {
        sz=n;
    }
    void insert();
    void modify(float val,int idx);
    void multiply(float val);
    void show();
};
void Vector :: insert()
{
    cout<<"Enter float numbers: ";
    vec=new float [sz];
    for(int i=0;i<sz;i++)
    {
        cin>>vec[i];
    }
    cout<<'\n';
}
void Vector :: modify(float val,int idx)
{
    if(idx<0 and idx>=sz)
    {
        cout<<"Invalid"<<'\n';
        return;
    }
    vec[idx-1]=val;
}
void Vector :: multiply(float val)
{
    for(int i=0;i<sz;i++)
    {
        vec[i]*=val;
    }
}
void Vector :: show()
{
    cout<<"Elements are: "<<'\n';
    for(int i=0;i<sz;i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    Vector tem(5);
    tem.insert();
    tem.show();
    tem.modify(7.3,1);
    tem.show();
    tem.multiply(2.3);
    tem.show();
}