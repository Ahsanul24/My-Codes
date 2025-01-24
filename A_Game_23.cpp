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
const int N = 1e8 + 10;
void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m == n)
    {
        cout << 0 << endl;
        return;
    }
    if (m % n != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll count = 0;
    int temp = m / n;
    if (m % n == 0)
    {
        while (temp % 2 == 0)
            temp /= 2, count++;
        while (temp % 3 == 0)
            temp /= 3, count++;
    }
    temp==1?cout<<count:cout<<-1;
}
int main()
{
    Ahsanul;
    solve();
}