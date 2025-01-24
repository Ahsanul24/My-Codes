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
#define f first
#define s second
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
    ll n; cin>>n;
    vl v(n+1,0);
    vector<pair<ll,ll>>p;
    p.pb({0,0});
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        p.pb({v[i],i});
    }
    srt(p);
    srt(v);
    vl pre(n+1,0);
    for(int i=1;i<=n;i++)
    {
        pre[i]+=(pre[i-1]+v[i]);
    }
    vi ans(n+1,0);
    ans[p[n].s]=n-1;
    for(int i=n-1;i>=1;i--)
    {
        if(pre[i]>=v[i+1])
        {
            ans[p[i].s]=ans[p[i+1].s];
        }
        else
        {
            ans[p[i].s]=i-1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}