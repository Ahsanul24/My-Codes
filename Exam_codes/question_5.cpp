/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class Time
{
public:
    int hour, minute;

    void set(int h,int m)
    {
        hour=h;
        minute=m;
    }
    void show()
    {
        cout<<"Hour: "<<hour<<" Minutes: "<<minute<<'\n';
    }
    friend Time sum(Time &ob1,Time &ob2);
};
Time sum(Time &ob1,Time &ob2)
{
    Time res;
    int tot_h = ob1.hour + ob2.hour;
    tot_h += (ob1.minute + ob2.minute) / 60;
    int tot_m = (ob1.minute + ob2.minute) - (60 * ((ob1.minute + ob2.minute) / 60));
    res.set(tot_h,tot_m);
    return res;
}
int main()
{
    Time t,tt;
    cout<<"Enter times: "<<'\n';
    cout<<"Hour & Minute: "<<'\n';
    int ti,m; cin>>ti>>m;
    t.set(ti,m);
    cin>>ti>>m;
    tt.set(ti,m);
    Time res;
    res=sum(t,tt);
    res.show();
}