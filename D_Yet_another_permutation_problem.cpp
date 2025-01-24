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


void solve()
{
    ll n;
    cin >> n;
    vi a(n), b(n);
    vector<int> dp(n + 2,0),pev(n+2,0);
    loop cin >> a[i];
    loop cin >> b[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int idx=i+1,idy=j+1;
            if(a[i]==b[j])
            {
                dp[j+1]=(1+pev[j]);
            }
            else
            {
                dp[j+1]=max(dp[j+1],pev[j]);
            }
            pev=dp;
        }

    }
    cout<<(2*n)-(2*dp[n])<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}