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
bool sr(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
void solve()
{
    int n; cin>>n;
    vl v(n),vv(n);
    loop cin>>v[i];
    loop cin>>vv[i];
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++)
    {
        p.pb({v[i],vv[i]});
    }
    sort(p.begin(),p.end(),sr);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=p[i].F;
        if(i<n-1)
        {
            p[i+1].F+=p[i].S;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}