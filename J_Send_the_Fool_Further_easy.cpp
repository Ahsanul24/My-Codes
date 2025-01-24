// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pi 2 * acos(0.0)
#define pr pair<ll, ll>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
const int N = 110;
int n;
vl g[N];
map<pr, ll> m;
ll cost[N];
bool vis[N];

void dfs(ll vertex, ll par)
{
    for (ll child : g[vertex])
    {
        if (child == par)
            continue;
        cost[child] = m[{vertex, child}] + cost[vertex];
        // cout<<vertex<<" "<<child<<endl;
        dfs(child, vertex);
    }
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        g[a].pb(b);
        g[b].pb(a);
        m[{a, b}] = c;
        m[{b, a}] = c;
    }
    dfs(0, 0);
    // for(int i=1;i<n;i++)cout<<cost[i]<<" ";
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, cost[i]);
    }
    cout << ans << endl;
}
int main()
{
    Ahsanul;
    //   test
    solve();
}