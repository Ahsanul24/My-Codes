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
const int N = 2 * 1e5 + 10;
int v[N][21];
void solve()
{
    int l, r;
    cin >> l >> r;
    int lot = r - l + 1;
    int ans = INT_MAX;
    for (int j = 0; j < 20; j++)
    {
        ans = min(ans, (lot - (v[r][j] - v[l - 1][j])));
    }
    cout << ans << endl;
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=3;j>=0;j--)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
}
int main()
{
    Ahsanul;
    for (int i = 1; i <= N; i++)
    {
        int num = i;
        for (int j = 19; j >= 0; j--)
        {
            if (num & (1 << j))
            {
                v[i][j]++;
            }
            v[i][j] += v[i - 1][j];
        }
    }
    // for(int i=2;i<=N;i++)
    // {
    //     for(int j=0;j<=20;j++)
    //     {
    //         v[i][j]+=v[i-1][j];
    //     }
    // }
    test
    solve();
}