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
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n;
    cin >> n;
    vl a(n), b(n);
    ll sum = 0, summ = 0;
    loop
    {
        cin >> a[i];
        sum += a[i];
    }
    loop
    {
        cin >> b[i];
        summ += b[i];
    }
    ll ovi = *min_element(a.begin(), a.end());
    ll mun = *min_element(b.begin(), b.end());
    ll r = sum + (mun * n), res = summ + (ovi * n);
    cout << min(r, res) << endl;
}
int main()
{
    int test;
    cin >> test;
    w(test) solve();
}