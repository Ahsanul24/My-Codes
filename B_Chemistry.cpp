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
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (abs(n - k) == 1)
    {
        cout << "YES" << endl;
        return;
    }
    vi pre(27, 0);
    for (int i = 0; i < n; i++)
    {
        pre[s[i] - 97]++;
    }
    srt(pre);
    int c = 0, temp;
    for (auto it : pre)
    {
        if (it % 2 != 0)
            c++;
    }
    if ((n - k) & 1)
        c--;
    if (k < c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    int test;
    cin >> test;
    w(test)
        solve();
}