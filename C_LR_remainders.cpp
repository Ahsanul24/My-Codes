// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))

void solve()
{
    ll n, m;
    cin >> n >> m;
    deque<ll>v(n);
    loop cin>>v[i];
    string s; cin>>s;
    vl tem;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            tem.pb(v.front());
            v.pop_front();
        }
        else
        {
            tem.pb(v.back());
            v.pop_back();
        }
    }
    reverse(tem.begin(),tem.end());
    //for(auto it:tem)cout<<it<<" ";cout<<endl;
    ll gun=1;
    vl res;
    for(int i=0;i<n;i++)
    {
        gun=(gun*tem[i])%m;
        res.pb(gun); 
    }
    reverse(res.begin(),res.end());
    for(auto it:res)cout<<it<<" ";cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}
