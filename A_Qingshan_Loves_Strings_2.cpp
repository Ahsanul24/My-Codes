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
    string s;
    cin >> s;
    string temp = "";
    int one = 0, zero = 0;
    vi v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            one++;
        else
            zero++;
    }
    if (one != zero)
    {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == s[s.size() - i - 1])
        {
            if (s[i] == '1')
            {
                v.pb(i);
                s.insert(i, "01");
            }
            else
            {
                v.pb(s.size() - i);
                s.insert(s.size() - i, "01");
            }
        }

        if (v.size() >= 300)
            break;
    }
    if (v.size() >= 300)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v.size() << endl;
        for (auto it : v)
        {

            cout << it << " ";
        }
        cout << endl;
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