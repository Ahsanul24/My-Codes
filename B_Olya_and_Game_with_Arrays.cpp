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
    ll tt; cin>>tt;
    vl sm;
    ll mm=INT_MAX;
    w(tt)
    {
        ll n; cin>>n;
        vl v(n);
        loop cin>>v[i];
        srt(v);
        sm.pb(v[1]);
        mm=min(v[0],mm);
    }
    srt(sm);
    ll ans=mm;
    for(int i=0;i<sm.size();i++)
    {
        ans+=sm[i];
    }
    ans-=sm[0];
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}