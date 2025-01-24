// Bismillahir Rahmanir Raheem
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
bool cmp(pr a,pr b)
{
    if(a.f==b.f)
    {
        return a.s>b.s;
    }
    return a.f<b.f;
}
void solve()
{
    int n; cin>>n;
    vector<pr>v;
    loop
    {
        int a,b; cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end(),cmp);
    ll ans=0;
    int i=0;
    while(i<n)
    {
        int c=v[i].f;
        for(int j=c;v[i].f==c and i<n;j--,i++)
        {
            if(j>0)
            {
                ans+=v[i].s;
            }
        }
    }
    cout<<ans<<endl;
    // for(auto it:v)
    // {
    //     cout<<it.f<<" "<<it.s<<endl;
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}