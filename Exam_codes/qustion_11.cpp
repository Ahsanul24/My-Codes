/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class scheme
{
    double principale_amount;
    int period;
    double rate;
public:
    scheme(double pri_amount,int peri,double rat)
    {
        principale_amount=pri_amount;
        period=peri;
        rate=rat;
    }
    void show()
    {
        cout << "Principal amount: "<<principale_amount<<endl;
        double r=(rate/100);
        double sud=principale_amount*(pow((1+r),period))-principale_amount;
        cout<<"Return Value: "<<principale_amount+sud<<endl;
    }
};
int main()
{
    double amount,rate;
    int period;
    cout<<"Enter principal amount:"<<endl; cin>>amount;
    cout<<"Enter interest rate in %:"<<endl;cin>>rate;
    cout<<"Enter investment period:"<<endl;cin>>period;
    scheme diposit(amount,period,rate);
    diposit.show();
}