// Bismillahir Rahmanir Raheem
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
int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * 1ll * a) % MOD;
        }
        a = (a * 1ll * a) % MOD;
        b >>= 1;
    }
    return res;
}
bool cmp(pr a, pr b)
{
    return a.s < b.s;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll count = 0;
    vl tem, res(n + 1, 0);
    vector<pr> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll left = 0, right = 0;
        if (s[i] == 'L')
            left = i, right = n - i - 1;
        else
            right = n - i - 1, left = i;
        if (s[i] == 'L' and right > left)
        {
            count++;
            sum += right;
            v.pb({i + 1, abs(left - right)});
        }
        else if (s[i] == 'L' and left > right)
        {
            sum += left;
        }
        else if (s[i] == 'R' and left > right)
        {
            count++;
            sum += left;
            v.pb({i + 1, abs(left - right)});
        }
        else if (s[i] == 'R' and right > left)
        {
            sum += right;
        }
        else
        {
            sum += right;
        }
        // cout<<left<<" "<<right<<endl;
    }
    for (int i = count; i <= n; i++)
    {
        res[i] = sum;
    }
    sort(v.begin(), v.end(), cmp);
    int i=count-1;
    for(auto it:v)
    {
        ll tem=it.s;
        res[i]=(sum-=tem);
        i--;
    }
    // srt(res);
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    // for (auto it : v)
    //     cout << it.f << " " << it.s << endl;
    // cout << endl;
}
int main()
{
    Ahsanul;
    test solve();
}