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
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
bool isSet(ll x,ll idx)
{
    if(x&(1<<idx))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    ll n,m; cin>>n>>m;
    ll l=max(0ll,n-m);
    ll r=n+m;
    ll boun=1;
    ll ans=0;
    for(ll i=0;i<32;i++)
    {
        if((r-l)>=boun)ans+=boun;
        else if(isSet(l,i))ans+=boun;
        else if(isSet(r,i))ans+=boun;
        boun<<=1;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}