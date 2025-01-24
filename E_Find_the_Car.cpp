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
    ll n, k, q;
    cin >> n >> k >> q;
    vl a(k + 1, 0), b(k + 1, 0);
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    w(q)
    {
        ll x;
        cin >> x;
        int lw=lower_bound(a.begin(),a.end(),x)-a.begin();
        if(a[lw]==x)
        {
            cout<<b[lw]<<" ";
            continue;
        }
        long double x1 = a[lw], x2 = a[lw - 1], y1 = b[lw], y2 = b[lw - 1];
        long double dif1 = (x1 - x2);
        long double dif2 = (y1 - y2);
        long double v = (dif1 / dif2);
        long double  ans = y2;
        long double baki = x - a[lw - 1];
        ans += (baki*dif2)/dif1;
        cout << (ll)(floor)(ans) << " ";
    }
    cout << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}