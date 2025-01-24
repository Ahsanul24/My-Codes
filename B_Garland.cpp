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
    string a, b;
    cin >> a >> b;
    vi prea(27, 0), preb(27, 0);
    for (int i = 0; i < a.size(); i++)
    {
        prea[a[i] - 96]++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        preb[b[i] - 96]++;
    }
    bool check = true;
    int ans = 0;
    for (int i = 0; i < 27; i++)
    {
        if (preb[i] > 0 && prea[i] == 0)
        {
            check = false;
        }
        ans += min(prea[i], preb[i]);
    }
    if (check)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    Ahsanul;
    solve();
}