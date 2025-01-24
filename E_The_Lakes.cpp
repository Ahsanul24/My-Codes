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
const int N = 1e3 + 10;
int a[N][N];
bool vis[N][N];
int sum = 0;
int dfs(int i, int j, int n, int m)
{
    sum += a[i][j];
    vis[i][j] = true;
    if (i - 1 >= 0 and !vis[i - 1][j] and a[i - 1][j] > 0) // up
        dfs(i - 1, j, n, m);
    if (i + 1 < n and !vis[i + 1][j] and a[i + 1][j] > 0) // down
        dfs(i + 1, j, n, m);
    if (j + 1 < m and !vis[i][j + 1] and a[i][j + 1] > 0) // right
        dfs(i, j + 1, n, m);
    if (j - 1 >= 0 and !vis[i][j - 1] and a[i][j - 1] > 0) // left
        dfs(i, j - 1, n, m);
    return sum;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] and a[i][j] > 0)
            {
                ans = max(ans, dfs(i, j, n, m));
                sum = 0;
            }
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