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
    int n,m; cin>>n>>m;
    vi bita(32,0);
    vi v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.pb(x);
        for(int j=0;j<31;j++)
        {
            if(x&(1<<j))bita[j]++;
        }
    }
    vi bitb(31,0);
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        for(int j=0;j<31;j++)
        {
            if(x&(1<<j))bitb[j]++;
        }
    }
    ll ans=v[0];
    for(int i=1;i<n;i++)
    {
        ans^=v[i];
    }
    ll maxi,mini;
    maxi=ans,mini=ans;
    if(n&1)
    {
        int barbe=1;
        for(int i=0;i<31;i++)
        {
            if(!(bita[i]&1) and bitb[i])maxi+=barbe;
            barbe <<= 1;
        }
    }
    else
    {
        int kombe=1;
        for(int i=0;i<31;i++)
        {
            if((bita[i]&1) and bitb[i])mini-=kombe;
            kombe<<=1;
        }
    }
    cout<<mini<<" "<<maxi<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}