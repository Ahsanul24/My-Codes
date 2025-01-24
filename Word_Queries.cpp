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
ll fac(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    return (n * 1ll * fac(n - 1)) % MOD;
}
void solve()
{
    string s;
    cin >> s;
    vi nonvo(27, 0);
    unordered_map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    ll n = s.size();
    ll vc = 0, nc = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vc++;
        else
        {
            nc++;
            // nonvo[s[i] - 96]++;
        }
    }
    ll summ = 1;
    for (auto it : mp)
    {
        if (it.first != 'a' && it.first != 'e' && it.first != 'i' && it.first != 'o' && it.first != 'u')
        {
            ll tem = fac(it.s);
            summ *= tem;
        }
    }
    ll sum = 1;
    // ll summ = 1;
    for (auto it : mp)
    {
        ll tem = fac(it.s);
        sum *= tem;
    }
    // for(int i=1;i<=27;i++)
    // {
    //     summ*=fac(nonvo[i]);
    // }
    ll q2 = fac(nc) / summ;
    // for (auto it : mp)
    // {
    //     if (it.second > 1)
    //         n = (n - it.second) + 1;
    // }
    n=(n-vc)+1;
    ll q1 = fac(n) / fac(sum);
    cout << q1 << endl;
    cout << q2 << endl;
    // for(auto it:nonvo)
    // {
    //     cout<<it<<" ";
    // }
}
int main()
{
    solve();
}