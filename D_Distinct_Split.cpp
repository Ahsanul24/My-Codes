// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1e9+7
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
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    set<char>c,cc;
    vi v,vv(n);
    for(int i=0;i<n;i++)
    {
        c.insert(s[i]);
        v.pb(c.size());
    }
    for(int i=n-1;i>=0;i--)
    {
        cc.insert(s[i]);
        vv[i]=cc.size();
    }
    int ans=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,v[i]+vv[i+1]);
    }
    cout<<ans<<endl;
    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}