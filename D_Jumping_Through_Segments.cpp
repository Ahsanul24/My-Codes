// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<ll, ll>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(ll a,ll b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
bool check(vector<pr>&v,ll m)
{
    ll l=0,r=0;
    for(int i=0;i<v.size();i++)
    {
        l-=m;
        r+=m;
        if(l>v[i].s)return false;
        if(r<v[i].f)return false;
        l=max(l,v[i].f);
        r=min(r,v[i].s);
    }
    return true;
}
void solve()
{
    int n; cin>>n;
    vector<pr> v;
    loop 
    {
        ll a,b; cin>>a>>b;
        v.pb({a,b});
    }
    ll l=0,r=1e9;
    ll ans=0;
    while (l<=r)
    {
        ll mid=(l+r)/2;
        if(check(v,mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}