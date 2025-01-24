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
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n;
    cin >> n;
    vector<pr> a, b, c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb({x, i + 1});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.pb({x, i + 1});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c.pb({x, i + 1});
    }
    rsrt(a);
    rsrt(b);
    rsrt(c);
    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if ((a[i].s != b[j].s) and (b[j].s != c[k].s) and (c[k].s != a[i].s))
                {
                    ans = max(ans, a[i].f + b[j].f + c[k].f);
                }
            }
        }
    }

    cout << ans << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}