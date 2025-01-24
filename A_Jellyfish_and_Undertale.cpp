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
void s()
{
    ll a, b, n;
    cin >> a >> b >> n;
    vl ovi(n);
    loop
    {
        cin >> ovi[i];
    }
    srt(ovi);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (b + ovi[i] <= a)
        {
            b += ovi[i];
        }
        else
        {
            ans += (b - 1);
            b = min(1 + ovi[i], a);
        }
    }
    ans += b;
    cout << ans << endl;
}
int main()
{
    Ahsanul;
    int test;
    cin >> test;
    w(test)
    {
        s();
    }
}