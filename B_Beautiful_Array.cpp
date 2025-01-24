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
#define ss second
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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    // if (s == 0)
    // {
    //     if (b == 0)
    //     {
    //         for (int i = 1; i <= n; i++)
    //         {
    //             cout << 0 << " ";
    //         }
    //         cout << endl;
    //     }
    //     return;
    // }
    ll tem = (s - (k * 1ll * b));
    if (tem<0)
    {
        cout << -1 << endl;
        return;
    }
    ll borota = b * k;
    ll summ=0;
    vl res(n,0);
    res[0]=borota;
    for(int i=0;i<n;i++)
    {
        int kocu=min(k-1,tem);
        res[i]+=kocu;
        tem-=kocu;
    }
    if(tem>0)
    {
        cout<<-1<<endl;
    }
    else
    {
        srt(res);
        for(auto it:res)cout<<it<<" ";
        cout<<endl;
    }
}
int main()
{
    Ahsanul;
    test solve();
}