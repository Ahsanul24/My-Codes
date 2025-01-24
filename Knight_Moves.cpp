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
vector<pr> posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
const int N = 11;
vector<pr> val(int x, int y)
{
    vector<pr> ans;
    for (int i = 0; i < 8; i++)
    {
        int xx = x + posible[i].f;
        int yy = y + posible[i].s;
        if (xx > 0 and yy > 0 and xx <=8 and yy <=8)
        {
            ans.pb({xx, yy});
        }
    }
    return ans;
}
int bfs(int sour_x, int sour_y, int des_x, int des_y)
{
    bool vis[N][N];
    int level[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            vis[i][j] = false;
            level[i][j] = 0;
        }
    }
    vis[sour_x][sour_y] = true;
    queue<pr> q;
    q.push({sour_x, sour_y});
    while (!q.empty())
    {
        pr curr = q.front();
        q.pop();
        for (auto child : val(curr.f, curr.s))
        {
            if(!vis[child.f][child.s])
            {
                q.push({child.f,child.s});
                vis[child.f][child.s]=true;
                level[child.f][child.s]=level[curr.f][curr.s]+1;
            }
        }
    }
    return level[des_x][des_y];
}
void solve()
{
    string x, y;
    while (cin >> x >> y)
    {
        int s_x = x[0] - 'a'+1;
        int s_y = x[1] - '0';
        int d_x = y[0] - 'a'+1;
        int d_y = y[1] - '0';
        cout << "To get from "<<x<<" to "<<y<<" takes "<<bfs(s_x,s_y,d_x,d_y)<<" knight moves."<<endl;
    }
}
int main()
{
    Ahsanul;
    solve();

}