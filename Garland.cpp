// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define w(x) while(x--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    int n; cin>>n;
    vector<int>v;
    while (n!=0)
    {
        v.pb(n%10);
        n/=10;
    }
    while (v.size()!=4)
    {
        v.pb(0);
    }
    
    srt(v);
    int a=0,count=0;
    for(int i=0;i<3;i++)
    {
        if(v[i]==v[i+1])
        {
            a++;
            if(a>count)
            {
                count=a;
            }
        }
        else
        {
            a=0;
        }
    }
    if(count==0 || count==1)
    {
        cout<<"4"<<endl;
        return;
    }
    if(count==2)
    {
        cout<<"6"<<endl;
        return;
    }
    cout<<"-1"<<endl;
}
int main()
{
    Ahsanul;
    ll test; cin>>test;
    w(test)
    {
        solve();
    }
}