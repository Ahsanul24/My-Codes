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
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    ll m,s; cin>>m>>s;
    vl v(m);
    for(ll i=0;i<m;i++)
    {
        cin>>v[i];
    }
    vl vec;
    for(ll i=1;i<=1111;i++)
    {
        bool check=true;
        for(ll j=0;j<m;j++)
        {
            if(v[j]==i)
            {
                check=false;
            }
        }
        if(check)
        {
            vec.push_back(i);
        }
    }
    ll sum=0;bool res=false;
    for(ll i=0;i<vec.size();i++)
    {
        sum+=vec[i];
        v.push_back(vec[i]);
        if(sum==s)
        {
            res=true;
            break;
        }
    }
    bool ovi=true;
    srt(v);
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]!=i+1)
        {
            ovi=false;
        }
    }
    if(res && ovi)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    ll test; cin>>test;
    w (test)
    {
        solve();
    }
    
}