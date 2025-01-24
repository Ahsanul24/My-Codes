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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N = 8;
bool vis[N][N];
int level[N][N];
vector<pr> val = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
vector<pr> c(int x, int y)
{
    vector<pr> res;
    for (int i = 0; i < 8; i++)
    {
        int a = x + val[i].f;
        int b = y + val[i].s;
        if ((a >= 0 and a < 8) and (b >= 0 and b < 8))
            res.pb({a, b});
    }
    return res;
}
int bfs(int x1, int y1, int desx, int desy)
{
    vis[x1][y1] = true;
    queue<pr> q;
    q.push({x1, y1});
    while (!q.empty())
    {
        pr curr = q.front();
        int x = curr.f, y = curr.s;
        q.pop();
        for (auto child : c(x, y))
        {
            if (!vis[child.f][child.s])
            {
                q.push({child.f, child.s});
                level[child.f][child.s] = level[curr.f][curr.s] + 1;
                vis[child.f][child.s] = true;
            }
        }
    }
    return level[desx][desy];
}
void solve()
{
    string a, b;
    cin >> a >> b;
    int x1 = a[0] - 'a', y1 = a[1] - '0' - 1, x2 = b[0] - 'a', y2 = b[1] - '0' - 1;
    cout << bfs(x1, y1, x2, y2) << endl;
}
int main()
{
    Ahsanul;
    test
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                vis[i][j] = false;
                level[i][j] = 0;
            }
        }
        solve();
    }
}