// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
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
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int cmp(string a, string b)
{
    int cnt = 0;
    while (a != b)
    {
        b += b[0];
        b.erase(b.begin() + 0);
        cnt++;
        if (cnt == a.size() and a != b)
        {
            return -1;
            break;
        }
    }
    return cnt;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> s;
    loop
    {
        string ss;
        cin >> ss;
        s.pb(ss);
    }
    for (int i = 1; i < n; i++)
    {
        string ovi = s[0], mun = s[i];
        srt(ovi);
        srt(mun);
        if (ovi != mun)
        {
            cout << -1 << endl;
            return;
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        string tem = s[i];
        char first = tem[0];
        int sum = 0, pos = 0;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                string kutta = s[j];
                int hi = cmp(tem, kutta);
                if (hi == -1)
                {
                    cout << -1 << endl;
                    return;
                }
                sum += hi;
            }
        }
        ans = min(ans, sum);
    }
    cout << endl;
    cout << ans << endl;
}
int main()
{
    solve();
}