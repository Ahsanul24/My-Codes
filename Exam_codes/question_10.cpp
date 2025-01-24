/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class DM;
class DB
{
    int feet,inch;
public:
    void set(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void show()
    {
        cout<<"Feet: "<<feet<<" "<<"Inch: "<<inch<<'\n';
    }
    friend DM addDM(DM &ob1,DB &ob2);
    friend DB addDB(DM &ob1,DB &ob2);
};
class DM
{
    int meter,centimeter;
public:
    void set(int m,int c)
    {
        meter=m;
        centimeter=c;
    }
    void show()
    {
        cout<<"Meter: "<<meter<<" "<<"Centimeter: "<<centimeter<<'\n';
    }
    friend DM addDM(DM &ob1, DB &ob2);
    friend DB addDB(DM &ob1, DB &ob2);
};
DM addDM(DM &ob1 , DB &ob2)
{
    int tot_cm=ob1.centimeter+(ob1.meter*100)+(ob2.feet*12*2.54)+(ob2.inch*2.54);
    int tem_m=tot_cm/100;
    int tem_cm=tot_cm%100;
    DM result;
    result.set(tem_m,tem_cm);
    return result;
}
DB addDB(DM &ob1, DB &ob2)
{
    int tot_inch=ob2.inch+(ob2.feet*12)+(ob1.meter*100)/2.54+(ob1.centimeter/2.54);
    int tem_feet=tot_inch/12;
    int tem_inch=tot_inch%12;
    DB result;
    result.set(tem_feet,tem_inch);
    return result;
}
int main()
{
    DM dm;
    DB db;
    cout<<"Enter meter and centimeter:"<<endl;
    int mt,centi;
    cin>>mt>>centi;
    cout<<"Enter feet and inch: "<<endl;
    int feet,inch;
    cin>>feet>>inch;
    dm.set(mt,centi);
    db.set(feet,inch);
    dm.show();
    db.show();
    cout<<"After addition: "<<endl;
    DM dmm=addDM(dm,db);
    cout<<"Result int DM: "<<endl;
    dmm.show();
    cout<<"Result int DB: "<<endl;
    DB dbb=addDB(dm,db);
    dbb.show();
}