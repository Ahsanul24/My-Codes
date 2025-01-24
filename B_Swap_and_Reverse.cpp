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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string tem = s;
    srt(tem);
    if (!(k & 1))
    {
        cout << tem << endl;
        return;
    }
    deque<char> odd, even;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            odd.pb(s[i]);
        else
            even.pb(s[i]);
    }
    srt(odd);
    srt(even);
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if(odd.size()==0 or even.size()==0)break;
        if (!check)
        {
            cout << odd.front();
            odd.pop_front();
            check = true;
        }

        else
        {
            cout << even.front();
            even.pop_front();
            check = false;
        }
    }
    if (odd.size() > 0)
    {
        while (odd.size() != 0)
        {
            cout << odd.front();
            odd.pop_front();
        }
    }
    if (even.size() > 0)
    {
        while (even.size() != 0)
        {
            cout << even.front();
            even.pop_front();
        }
    }
    cout << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}