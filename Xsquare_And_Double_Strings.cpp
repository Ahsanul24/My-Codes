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
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << "No" << endl;
        return;
    }
    vi v(27, 0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i] - 96]++;
    }
    bool check = false;
    for (int i = 1; i < 27; i++)
    {
        if (v[i] >= 2)
            check = true;
    }
    if (check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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