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
void solve()
{
    ll n, q;
    cin >> n >> q;
    vl v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vl s(n, 0);
    for (ll i = 1; i < n; i++)
    {
        s[0] = v[0];
        s[i] = s[i - 1] + v[i];
    }
    w(q)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll notun = s[n - 1];
        if (l == 1)
        {
            notun -= s[r - 1];
        }
        else
        {
            notun -= (s[r - 1] - s[l - 2]);
        }
        notun += ((r - l) + 1) * k;
        if (notun % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ll test;
    cin >> test;
    w(test)
    {
        solve();
    }
}