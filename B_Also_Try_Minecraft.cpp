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
#define F first
#define S second
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
    int n, m;
    cin >> n >> m;
    vl v(n + 1, 0), h(n + 2, 0), rh(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] < v[i - 1])
        {
            h[i] = abs(v[i] - v[i - 1]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        h[i] += h[i - 1];
    }
    for (int i = n; i >= 1; i--)
    {
        if (v[i] < v[i + 1])
        {
            rh[i] = abs(v[i] - v[i + 1]);
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        rh[i] += rh[i + 1];
    }
    w(m)
    {
        int a,b; cin>>a>>b;
        if(a<b)
        {
            cout<<h[b]-h[a]<<endl;
        }
        else
        {
            cout<<abs(rh[b]-rh[a])<<endl;
        }
    }
    // for (auto it : rh)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
}
int main()
{
    Ahsanul;
    solve();
}