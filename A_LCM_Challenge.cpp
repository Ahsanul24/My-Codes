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
    ll n; cin>>n;
    ll a=n,b=n-1,c=n-2,d=n-3;
    if(n<=3)
    {
        if(n==2)cout<<2<<endl;
        else if(n==1) cout<<1<<endl;
        else cout<<6<<endl;
        return;
    }
    ll res=lcm(a,lcm(b,c));
    if(n&1)
    {
        cout<<res<<endl;
        return;
    }
    ll ress=INT_MIN;
    for(ll i=n;i>max(0ll,n-50);i--)
    {
        for(ll j=n-1;j>max(0ll,n-50);j--)
        {
            for(ll k=n-2;k>max(0ll,n-50);k--)
            {
                ress=max(ress,lcm(i,lcm(j,k)));
            }
        }
    }
    cout<<ress<<endl;
}
int main()
{
    Ahsanul;
    solve();
}