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
    char a[n + 1][m + 1];
    int mot=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='1')mot++;
        }
    }
    int ans = 0,mini=INT_MAX;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            int cnt = 0;
            if (a[i][j] == '1')
                cnt++;
            if (a[i][j + 1] == '1')
                cnt++;
            if (a[i + 1][j] == '1')
                cnt++;
            if (a[i + 1][j + 1] == '1')
                cnt++;
            mini=min(mini,cnt);
        }
    }
    if(mini<=2)
    {
        cout<<mot<<endl;
    }
    else
    {
        if(mini==3)
        {
            cout<<mot-1<<endl;
        }
        else
        {
            cout<<mot-2<<endl;
        }
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}