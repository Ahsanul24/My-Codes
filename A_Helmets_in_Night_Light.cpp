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
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<ll, ll>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    ll n, k;
    cin >> n >> k;
    vl a(n), b(n);
    loop cin >> a[i];
    loop cin >> b[i];
    vector<pr> p;
    for (int i = 0; i < n; i++)
    {
        p.pb({b[i], a[i]});
    }
    srt(p);
    ll res = k;
    ll c = 1;
    for (auto it : p)
    {
        if (it.f < k)
        {
            res += (it.f * (min(it.s, n - c)));
            c += min(it.s, n - c);
        }
    }
    res += (n - c) * 1ll * k;
    cout << res << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}