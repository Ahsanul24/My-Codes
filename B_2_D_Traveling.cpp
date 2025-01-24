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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n,m,a,b; cin>>n>>m>>a>>b;
    vector<pr>v;
    loop
    {
        int x,y; cin>>x>>y;
        v.pb({x,y});
    }
    if(a<=m and b<=m)//case 1
    {
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    ll xvall = llabs(v[a - 1].f - v[b - 1].f);
    ll yvall = llabs(v[a - 1].s - v[b - 1].s);
    ans = xvall + yvall;
    if(m==0)//case 2
    {
        cout<<ans<<endl;
        return;
    }
    // case 3
    ll xval=LLONG_MAX,yval=LLONG_MAX;
    for(int i=0;i<m;i++)
    {
        xval=min(xval,llabs(v[a-1].f-v[i].f)+llabs(v[a-1].s-v[i].s));
        yval=min(yval,llabs(v[b-1].f-v[i].f)+llabs(v[b-1].s-v[i].s));
    }
    cout<<min(xval+yval,ans)<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}