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
    int n;
    cin >> n;
    vi v(n);
    loop cin >> v[i];
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    int c = 0, cc = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > 3)
        {
            cout << "NO" << endl;
            return;
        }
        if (v[i + 1] - v[i] == 3)
            cc++;
        else if (v[i + 1] - v[i] == 2)
            c++;
    }
    if (cc == 1 and c == 0)
        cout << "YES" << endl;
    else if (c <= 2 and cc == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}