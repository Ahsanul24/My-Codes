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
    int n; cin>>n;
    vector<pr>v;
    bool check=false;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        if(x==1)check=true;
        v.pb({x,i+1});
    }
    for(auto it:v)
    srt(v);
    if(check and !(v[0].f == v[n-1].f and v[0].f==1))
    {
        cout<<-1<<endl;
        return;
    }
    if(v[0].f==v[n-1].f)
    {
        cout<<0<<endl;
        return;
    }
    vector<pr>ans;
    int cnt=0;
    while(cnt<=30*n)
    {
        for(int i=0;i<n-1;i++)
        {
            if(v[i].f==v[i+1].f)continue;
            v[i+1].f=ceil(v[i+1].f*1.0/v[i].f);
            ans.pb({v[i+1].s,v[i].s});
        }
        srt(v);
        if (v[0].f == v[n - 1].f)
        {
            break;
        }
        cnt++;
    }
    // for(auto it:v)cout<<it.f<<" ";
    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it.f<<" "<<it.s<<endl;
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}