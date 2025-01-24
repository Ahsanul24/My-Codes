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
int kocu(string s)
{
    stringstream m;
    m << s;
    int temp = 0;
    m >> temp;
    return temp;
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 25 == 0)
    {
        cout << 0 << endl;
        return;
    }
    stringstream ovi;
    ovi << n;
    string temp = "";
    ovi >> temp;
    int size = temp.size();
    int ans = INT_MAX;
    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = i + 1; j < temp.size(); j++)
        {
            int madam = (temp[i] - '0') * 10 + temp[j] - '0';
            if (madam % 25 == 0)
            {
                ans = min(ans, ((j - i - 1) + (size - 1 - j)));
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int test;
    cin >> test;
    w(test)
        solve();
}