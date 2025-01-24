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
    int i = 0;
    for (int j = 1; j < s.length() - 1; j++)
    {
        if (s[j] == 'a')
        {
            i = j;
            break;
        }
    }
    string a = "";
    string b = "a";
    string c = "";
    if (i)
    {
        for (int j = 0; j < i; j++)
        {
            a += s[j];
        }
        for (int j = i + 1; j < s.length(); j++)
        {
            c += s[j];
        }
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << s[0] << " ";
        for (int i = 1; i < s.length() - 1; i++)
        {
            cout << s[i];
        }
        cout << " ";
        cout << s[s.length() - 1] << endl;
    }
}
int main()
{
    Ahsanul;
    int t;
    cin >> t;
    w(t)
    {
        solve();
    }
}