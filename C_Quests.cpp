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
    int n, k;
    cin >> n >> k;
    vl a(n+1), b(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll temans = 0, tem = INT_MIN;
    ll  ans=0;
    for (int i = 0; i < n ; i++)
    {
        if(i==k)break;
        temans += a[i];
        tem = max(tem, b[i]);
        if (i + 1 == n)
        {
            ans=max(ans, (temans + ((k - i -1) * tem)));
        }
        ans =max(ans, (temans + ((k - i - 1) * tem)));
    }
    cout << ans << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}