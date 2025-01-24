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
const int N = 1e5 + 10;
void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vi suf(n, 0);
    suf[n - 1]++;
    int last = v[n - 1], first = v[0];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = (suf[i + 1] + (v[i] == last));
    }
    int count = 0;
    bool mun = false;
    if (first == last)
    {
        if (suf[0] % k == 0 or suf[0] >= k)
        {
            cout << "YES" << endl;
            return;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        count += (v[i] == first); //work as if condition.return value 0 or 1
        if ((count % k == 0) and (suf[i + 1] >= k))
        {
            mun = true;
            break;
        }
    }
    if (mun)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}