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
    int n, k;
    cin >> n >> k;
    vi v(n);
    loop cin >> v[i];
    int l = 0, r = 0, ans = INT_MAX;
    int sum = 0;
    while (l <= n)
    {
        while (r < n and (sum + v[r] <= k))
        {
            sum += v[r];
            r++;
        }
        if (sum == k)
        {
            ans = min(ans, n - r + l);
        }
        sum -= v[l];
        l++;
    }
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << ans << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}