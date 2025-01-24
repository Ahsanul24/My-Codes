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
    ll a,q; cin>>a>>q;
    string s; cin>>s;
    vector<ll>v;
    v.pb(0);
    ll ans=0;
    for(ll i=0;i<a;i++)
    {
        ans+=s[i]-'a'+1;
        v.pb(ans);
    }
    w(q)
    {
        ll l,r; cin>>l>>r;
        cout<<v[r]-v[l-1]<<endl;
    }
}
int main()
{
    Ahsanul;
    solve();
}
