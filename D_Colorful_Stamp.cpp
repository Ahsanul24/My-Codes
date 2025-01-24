// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // if (n <= 2)
    // {
    //     if (n == 1 and s[0] == 'W')
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     if (n == 2 and s[0] == 'W' and s[1] == 'W')
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    //     cout << "NO" << endl;
    //     return;
    // }
    bool check = true;
    int cntb = 0, cntr = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if ((cntb > 0 and cntr == 0) or (cntr > 0 and cntb == 0))
            {
                check = false;
                break;
            }
            else
            {
                cntb = 0;
                cntr = 0;
            }
        }
        else
        {
            if (s[i] == 'B')
                cntb++;
            else if (s[i] == 'R')
                cntr++;
        }
    }
    if ((cntb > 0 and cntr == 0) or (cntr > 0 and cntb == 0))
        check = false;
    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}
