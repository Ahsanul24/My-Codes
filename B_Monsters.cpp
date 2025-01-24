// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
bool cmp(pair<int,int>x,pair<int,int>y)
{
    if(x.first==y.first)
    {
        return (x.S<y.S);
    }
    return (x.F>y.F);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    loop
    cin >>v[i];
    vi ans;
    vector<pair<int,int>>in;
    for(int i=0;i<n;i++)
    {
        if(v[i]%k==0)
        {
            ans.pb(i+1);
        }
        else
        {
            in.pb({v[i]%k,i+1});
        }
    }
    sort(in.begin(),in.end(),cmp);
    for(auto it:in)
    {
        ans.pb(it.S);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}