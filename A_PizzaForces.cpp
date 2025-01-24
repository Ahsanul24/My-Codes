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
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    if (n <= 10)
    {
        if (n <= 6)
            cout << 15 << endl;
        else if (n > 6 && n <= 8)
            cout << 20 << endl;
        else
            cout << 25 << endl;
        return;
    }
    c += (n / 10) * 25;
    if (n % 10)
    {
        int tem = n % 10;
        if (tem == 1 || tem == 2)
            c += 5;
        else if (tem <= 4)
            c += 10;
        else if (tem <= 6)
            c += 15;
        else if (tem <= 8)
            c += 20;
        else
            c += 25;
    }
    cout << c << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}