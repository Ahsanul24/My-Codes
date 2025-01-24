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
    void Insert();
    void modify(float val,int idx);
    void multiply(float val);
    void show()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    friend Vector add(Vector &ob1,Vector &ob2);
};
void Vector :: Insert()
{
    vec=new float [sz];
    cout<<"Enter float values of vector: "<<'\n';
    for(int i=0;i<sz;i++)
    {
        cin>>vec[i];
    }
}
void Vector :: modify(float val,int idx)
{
    if(idx>=0 and idx<sz)
    {
        vec[idx-1]=val;
        cout<<"Modified"<<'\n';
    }
    else
    {
        cout<<"Invalid Index"<<'\n';
    }
}
void Vector :: multiply(float val)
{
    for(int i=0;i<sz;i++)
    {
        vec[i]*=val;
    }
}
Vector add(Vector &ob1,Vector &ob2)
{
    Vector res(max(ob1.sz,ob2.sz));
    res.vec=new float [ob1.sz+ob2.sz];
    int i;
    for(i=0;i<min(ob1.sz,ob2.sz);i++)
    {
        res.vec[i]=ob1.vec[i]+ob2.vec[i];
    }
    while(i<ob1.sz)
    {
        res.vec[i]=ob1.vec[i];
        i++;
    }
    while(i<ob2.sz)
    {
        res.vec[i]=ob2.vec[i];
        i++;
    }
    return res;
}
int main()
{
    Vector ob1(5),ob2(3);
    ob1.Insert();
    ob2.Insert();
    ob1.show();
    ob2.show();
    Vector ob3=add(ob1,ob2);
    ob3.show();
}
