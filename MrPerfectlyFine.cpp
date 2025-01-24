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
    int n,ans=INT_MAX;
    cin>>n;
    vector<pair<int,string>>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    bool key=false;
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++)
    {
        if(p[i].second=="11")
        {
            ans=min(ans,p[i].first);
            key=true;
        }
    }
    bool f=false,ch=false;
    int a=INT_MAX,b=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(p[i].second=="10")
        {
            a=min(a,p[i].first);
            f=true;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(p[i].second=="01")
        {
            b=min(b,p[i].first);
            ch=true;
        }
    }
    ans=min(ans,a+b);
    if(key)
    {
        cout<<ans<<endl;
        return;
    }
    else if(f && ch)
    {
        cout<<ans<<endl;
        return;
    }
    cout<<"-1"<<endl;
}
int main()
{
    int test;
    cin>>test;
    w (test)
    {
        solve();
    }
}