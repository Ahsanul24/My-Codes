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
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    loop cin>>a[i];
    vi ans(n);
    for (ll i = 0; i < n; i++)
    {
        ans[i] = (n + 1) - a[i];
    }
    int idx=find(ans.begin(),ans.end(),n)-ans.begin();
    //print(ans);
    vector<pr> idxx;
    idxx.pb({n, idx});
    bool even=(idx&1);
    for (int i = 0; i < n; i++)
    {
        if((idx&1)!=(i&1))
        {
            idxx.pb({ans[i],i});
        }
    }
    rsrt(idxx);
    //  for (auto it : idxx)
    //      cout << it.f << " " << it.s << endl;
    //  cout << endl;
     for (int  i = 1; i < (int )idxx.size(); i++)
     {
         ans[idxx[i].second] = idxx[i - 1].first;
     }
     ans[idxx[0].second] = idxx.back().first;
     //print(ans);
}
int main()
{
    Ahsanul;
    test
    solve();
}