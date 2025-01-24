// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
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
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    ll n, k;
    cin >> n >> k;
    deque<ll> d(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> d[i];
    srt(d);
    for (int i = 1; i <= n; i++)
        d[i] = d[i] + d[i - 1];
    ll ans=d[n-k];
    for(int i=1;i<=k;i++)
    {
        ans=max(ans,(d[n-(k-i)]-d[2*i]));
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}