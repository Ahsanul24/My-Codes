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
    vi a(n), b(n);
    vi h(n + 1, 0), hh(n + 1, 0);
    loop cin >> a[i],h[a[i]]++;
    loop cin >> b[i],hh[b[i]]++;
    srt(a);
    srt(b);
    // for(auto it:a)cout<<it<<" ";cout<<endl;
    // for(auto it:b)cout<<it<<" ";cout<<endl;
    k *= 2;
    vi ans, anss;
    for (int i = 1; i <= n; i++)
    {
        if (h[i] and hh[i])
        {
            ans.pb(i);
            anss.pb(i);
        }
    }
    if (ans.size() >= k)
    {
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < k; i++)
        {
            cout << anss[i] << " ";
        }
        cout << endl;
        return;
    }
    if (ans.size() & 1)
    {
        ans.pop_back();
        anss.pop_back();
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            ans.pb(a[i]);
            ans.pb(a[i + 1]);
            i++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            anss.pb(b[i]);
            anss.pb(b[i + 1]);
            i++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        cout << anss[i] << " ";
    }
    cout << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}