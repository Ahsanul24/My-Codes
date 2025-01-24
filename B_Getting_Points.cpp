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

    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll task = (n - n % 7) / 7 + 1;
    task -= (n % 7 == 0 ? 1 : 0);
    ll lef = 1, rig = task;
    ll ans = task;
    while (lef <= rig)
    {
        ll mid = (lef + rig) / 2;
        if (p <= (mid + 1) / 2 * l + t * mid)
        {
            ans = mid;
            rig = mid - 1;
        }
        else
        {
            lef = mid + 1;
        }
    }
    ll rac2 = (ans + 1) / 2;
    ll arlagbe = rac2 * l + t * ans;
    p = p - arlagbe;
    ll tmp = rac2;
    p = max(p, 0ll);
    tmp = tmp + (p / l);
    tmp = tmp + (p % l != 0);
    cout << n - tmp << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}