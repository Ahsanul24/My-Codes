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
    int n, m;
    cin >> n >> m;
    char g[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    for (int i = m-1; i >= 0; i--)
    {
        int obs=n-1;
        for(int j=n-1;j>=0;j--)
        {
            if(g[j][i]=='o')
            {
                obs=j-1;
            }
            else if(g[j][i]=='*')
            {
                char tem=g[j][i];
                g[j][i]=g[obs][i];
                g[obs][i]=tem;
                obs--;//next obstracle hobe *
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << g[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}