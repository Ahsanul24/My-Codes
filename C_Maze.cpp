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
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
const int N = 510;
char v[N][N];
bool vis[N][N];
int n, m, k, cnt = 0;
vector<pr> valid(int a, int b)
{
    vector<pr> ans;
    for (int i = 0; i < 4; i++)
    {
        int aa = a + posible[i].f;
        int bb = b + posible[i].s;
        if (aa >= 0 and aa < n and bb >= 0 and bb < m)
        {
            ans.pb({aa, bb});
        }
    }
    return ans;
}
void dfs(int sour_x, int sour_y)
{
    vis[sour_x][sour_y] = true;
    for (auto child : valid(sour_x, sour_y))
    {
        int x = child.f, y = child.s;
        if (vis[x][y])
            continue;
        if (v[x][y] == '.')
        {
            dfs(x, y);
            if (cnt < k)
            {
                v[x][y] = 'X';
                cnt++;
            }
        }
    }
}
void solve()
{
    cin >> n >> m >> k;
    int sx=0,sy=0;
    bool check=true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if(check)
            {
                if(v[i][j]=='.')
                {
                    sx=i;
                    sy=j;
                    check=false;
                }
            }
        }
    }
    dfs(sx,sy);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    Ahsanul;
    //   test
    solve();
}