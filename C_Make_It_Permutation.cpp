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
    ll n, c, d;
    cin >> n >> c >> d;
    vl v(n);
    map<int, int> m;
    loop
    {
        cin >> v[i];
        m[v[i]]++;
    }
    srt(v);
    int maxi = v[n - 1];

    ll per_banate_khoroc = (maxi - m.size()) * d; // total cost banate
    int cnt = 0;
    for (auto it : m)
    {
        if (it.s > 1)
        {
            cnt += it.s - 1;
        }
    }
    per_banate_khoroc += (cnt * c);
    // cout<<per_banate_khoroc<<endl;
    ll min_len_per_banate_khoroc = LLONG_MAX;
    int k = 1;
    int cntt = 0;
    for (auto it : m)
    {
        if (it.f == k)
        {
            k++;
            cntt += it.s - 1;
        }
        else
        {
            break;
        }
    }
    k--;
    if (k >= 1)
        min_len_per_banate_khoroc = (n - k) * c;
    ll cnt2 = 0;
    vl h;
    ll tem=(n*c)+d;
    for(auto x:m)
    {
        h.pb(x.f);
    }

    for (int i=0;i<h.size();i++)
    {
        ll temp=((h[i]-(i+1))*d)+(h.size()-(i+1))*c;
        tem=min(tem,temp);
    }
     //cout<<per_banate_khoroc<<" "<<min_len_per_banate_khoroc<<" "<<tem<<endl;
    cout << min({((n*1ll*c)+d), tem+(cnt*c)}) << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}