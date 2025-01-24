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
const int N=1000;
vector<pr>co;
void solve()
{
    int n; cin>>n;
    map<int,int>m;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        if(m.find(x)!=m.end())
        {
            m.erase(x);
        }
        m.insert({x,i});
    }
    int ans=-1;
    for(int i=0;i<co.size();i++)
    {
        int a=co[i].f;
        int b=co[i].s;
        int tem;
        if(m.find(a)!=m.end() and m.find(b)!=m.end())
        {
            tem=m[a]+m[b];
            ans=max(ans,tem);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (gcd(i, j) == 1)
            {
                co.pb({i, j});
            }
        }
    }
    test solve();
}