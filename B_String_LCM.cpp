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
    string a, b;
    cin >> a >> b;
    int asize = a.size(), bsize = b.size();
    int lc = lcm(asize, bsize);
    int tem = lc / asize, temm = lc / bsize;
    string a1 = "", b1 = "";
    for (int i = 1; i <= tem; i++)
        a1 += a;
    for (int i = 1; i <= temm; i++)
        b1 += b;
    if (a1 != b1)
        cout << -1 << endl;
    else
        cout << a1 << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}