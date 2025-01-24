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
#define pr pair<ll, ll>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;
    vector<vl> vv(n + 1);
    for (int i = 1; i <= n; i++)
    {
        vl tem;
        ll sum = 0;
        tem.pb(0);
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            tem.pb(x);
        }
        vv[i] = tem;
    }
    vector<vl> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        vl tem = vv[i];
        srt(tem);
        vl temm;
        ll sum = 0;
        for (int j = 1; j < tem.size(); j++)
        {
            sum += tem[j];
            if (sum <= h)
            {
                temm.pb(sum);
            }
            else
            {
                break;
            }
        }
        v[i] = temm;
    }
    vl cnt, pelan;
    for (int i = 1; i <= n; i++)
    {
        auto kocu = v[i];
        cnt.pb(kocu.size());
        ll sm = 0;
        for (auto it : kocu)
            sm += it;
        pelan.pb(sm);
    }
    ll fc = cnt[0], fp = pelan[0];
    ll ans = 1;
    for (int i = 1; i < cnt.size(); i++)
    {
        if (fc < cnt[i])
        {
            ans++;
        }
        if (fc == cnt[i] and fp > pelan[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}