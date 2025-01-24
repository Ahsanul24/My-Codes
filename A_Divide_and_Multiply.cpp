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
    ll n;
    cin >> n;
    vl v(n), even, odd;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)
        {
            odd.pb(v[i]);
        }
        else
        {
            ans *= v[i];
            even.pb(v[i]);
        }
    }
    srt(odd);
    if (odd.size() != 0)
    {
        ans *= odd[odd.size() - 1];
    }
    if (odd.size() > 1)
    {
        for (int i = 0; i < odd.size() - 1; i++)
        {
            ans += odd[i];
        }
    }
    if(odd.size()==0)
    {
        ans+=n-1;
    }
    if(odd.size() && even.size())
    {
        ans+=even.size();
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