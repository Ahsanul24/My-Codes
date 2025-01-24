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
const int N = 1010, M = 1010;
int n, m;
char a[N][M];
bool vis[N][M];
void dfs(int i, int j)
{
    vis[i][j] = true;
    if (i > n - 1 or j > m - 1)
        return;
    if (i < 0 or j < 0)
        return;
    if (a[i][j + 1] == '.' and !vis[i][j + 1])
        dfs(i, j + 1);
    if (a[i][j - 1] == '.' and !vis[i][j - 1])
        dfs(i, j - 1);
    if (a[i + 1][j] == '.' and !vis[i + 1][j])
        dfs(i + 1, j);
    if (a[i - 1][j] == '.' and !vis[i - 1][j])
        dfs(i - 1, j);
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' and !vis[i][j])
            {
                dfs(i, j);
                // cout<<i<<" "<<j<<endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
int main()
{
    Ahsanul;
    //   test
    solve();
}