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
#define loop for (ll i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
ll ok(vl a,ll x,ll k)
{
    ll sum=0;
    ll curr_area=0;
    for(int i=0;i<a.size();i++)
    {
        sum=(2*x)+a[i];
        curr_area+=(sum*1ll*sum);
        if(curr_area>k)
        {
            return curr_area;
            break;
        }
    }
    return curr_area;
}
void solve()
{
    ll n,k; cin>>n>>k;
    vl v(n);
    loop cin>>v[i];
    ll low=1,high=10000000000;
    while(low<=high)
    {
        ll mid=(high+low)/2ll;
        ll tem=ok(v,mid,k);
        if(tem==k)
        {
            cout<<mid<<endl;
            return;
        }
        if(tem>k)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}