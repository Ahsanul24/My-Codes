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
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    ll a,b,l; cin>>a>>b>>l;
    if(l%a!=0 and l%b!=0)
    {
        cout<<1<<endl;
        return;
    }
    set<ll>k;
    for(ll x=0;x<=100 and power(a,x)<=l;x++)
    {
        for(ll y=0;y<=100 and power(b,y)<=l;y++)
        {
            ll tem=power(a,x);
            ll temp=power(b,y);
            if(l%(tem*temp)==0)
            {
                k.insert((l / (tem * temp)));
            }
        }
    }
    cout<<k.size()<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}