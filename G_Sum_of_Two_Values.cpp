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
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> pair;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        pair.push_back({y, i});
    }
    srt(pair);
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (pair[l].f + pair[r].f < x)
        {
            l++;
        }
        else if (pair[l].f + pair[r].f > x)
        {
            r--;
        }
        else
        {
            cout << pair[l].s+1 << " " << pair[r].s+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    Ahsanul;
    solve();
}