/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
double power(double m,int n=2)
{
    return pow(m,n);//return m*m
}
int main()
{
    double m; cin>>m;
    double ans=power(m);
    cout<<ans<<'\n';
}