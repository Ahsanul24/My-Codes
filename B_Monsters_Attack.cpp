// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
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
    ll n, k;
    cin >> n >> k;
    vi a(n), b(n);
    loop cin >> a[i];
    loop cin >> b[i];
    vector<pr> v;
    for (ll i = 0; i < n; i++)
    {
        v.pb({abs(b[i]), a[i]});
    }
    srt(v);
    ll time = 0;
    ll my = k;
    ll rem = 0;
    bool check=true;
    for (ll i = 0; i < n; i++)
    {
        ll dis = v[i].f;
        ll guli = v[i].s;

        if (rem >= guli)
        {
            rem -= guli;
            continue;
        }
        dis -= time;
        guli -= rem;
        rem = 0;
        if (dis *1ll* k < guli)
        {
            check=false;
            break;
        }
        else
        {
            rem += dis *1ll* k - guli;
        }
        time += dis;
    }
    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}
