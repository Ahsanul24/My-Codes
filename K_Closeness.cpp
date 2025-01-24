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
    ll n, k;
    cin >> n >> k;
    vl v(n);
    bool check = true;
    loop
    {
        cin >> v[i];
        if (v[i] % k)
            check = false;
    }
    if (check)
    {
        cout << 0 << endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        v[i]=v[i]%k;
    }
    srt(v);
    ll ans=v[n-1]-v[0];
    for(int i=0;i<n-1;i++)
    {
        ans=min(ans,v[i]+k-v[i+1]);
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}