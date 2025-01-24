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
#define print(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N = 1e5 + 10;
ll a[N];
ll sz;
struct tree
{
    ll maxsum, sum, bps, bss;
} tree[4 * N];
void build(int node = 0, int beg = 0, int end = sz)
{
    if (beg == end)
    {
        if (a[beg] < 0)
        {
            tree[node].maxsum = 0;
            tree[node].sum = a[beg];
            tree[node].bps = 0;
            tree[node].bss = 0;
        }
        else
        {
            tree[node].maxsum = a[beg];
            tree[node].sum = a[beg];
            tree[node].bps = a[beg];
            tree[node].bss = a[beg];
        }
        return;
    }
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = beg + (end - beg) / 2;
    build(left, beg, mid);
    build(right, mid + 1, end);
    ll sum = tree[left].sum + tree[right].sum;
    ll bps = max(tree[left].bps, tree[left].sum + tree[right].bps);
    ll bss = max(tree[right].bss, tree[right].sum + tree[left].bss);
    ll maxsum = max({tree[left].maxsum, tree[right].maxsum, tree[left].bss + tree[right].bps});
    tree[node].maxsum = maxsum;
    tree[node].sum = sum;
    tree[node].bps = bps;
    tree[node].bss = bss;
}
void update(int idx, ll val, int node = 0, int beg = 0, int end = sz)
{
    if (idx > end or idx < beg)
    {
        return;
    }
    if (beg == end)
    {
        a[beg] = val;
        if (a[beg] < 0)
        {
            tree[node].maxsum = 0;
            tree[node].sum = a[beg];
            tree[node].bps = 0;
            tree[node].bss = 0;
        }
        else
        {
            tree[node].maxsum = a[beg];
            tree[node].sum = a[beg];
            tree[node].bps = a[beg];
            tree[node].bss = a[beg];
        }
        return;
    }
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = beg + (end - beg) / 2;
    update(idx, val, left, beg, mid);
    update(idx, val,right, mid + 1, end);
    ll sum = tree[left].sum + tree[right].sum;
    ll bps = max(tree[left].bps, tree[left].sum + tree[right].bps);
    ll bss = max(tree[right].bss, tree[right].sum + tree[left].bss);
    ll maxsum = max({tree[left].maxsum, tree[right].maxsum, tree[left].bss + tree[right].bps});
    tree[node].maxsum = maxsum;
    tree[node].sum = sum;
    tree[node].bps = bps;
    tree[node].bss = bss;
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    sz = n - 1;
    loop cin >> a[i];
    build();
    cout << tree[0].maxsum << endl;
    w(q)
    {
        ll x, v;
        cin >> x >> v;
        update(x, v);
        cout << tree[0].maxsum << endl;
    }
}
int main()
{
    Ahsanul;
    // test
    solve();
}