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
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

const int N = 2010;
vi g[N];


int n;
int bfs(int source)
{
    bool vis[n+2];
    int par[n+2];
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    queue<int> q;
    q.push(source);
    vis[source] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int child : g[curr])
        {

            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                par[child] = curr;
            }
            else if (child == source)
            {
                vi vv;
                for (int i = curr; i != -1; i = par[i])
                {
                    vv.pb(i);
                }
                return vv.size();
            }
        }
    }
    return -1;
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                g[i].pb(j);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (bfs(i) == -1)
        {
            cout << "NO WAY" << endl;
        }
        else
        {
            cout << bfs(i) << endl;
        }
    }
}
int main()
{
    Ahsanul;
    //   test
    solve();
}