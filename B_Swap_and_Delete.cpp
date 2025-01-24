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
    string s;
    cin >> s;
    int n = s.size();
    int one = 0, zero = 0, ovi = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            if (one == 0)
            {
                ovi = n - i;
                break;
            }
            one--;
        }
        else 
        {
            if (zero == 0)
            {
                ovi = n - i;
                break;
            }
            zero--;
        }
    }
    cout << ovi << endl;
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
        solve();
}