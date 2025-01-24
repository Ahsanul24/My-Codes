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
    vi v(n);
    bool check = false;
    loop
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            check = true;
        }
    }
    for (int i = n - 2; i > 0; i--)
    {
        int porer = v[i + 1];
        v[i + 1] = 0;
        v[i] = v[i] - 2 * porer;
        v[i - 1] = v[i - 1] - porer;
        if(porer<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    bool key=false;
    for (auto it : v)
    {
        if(it!=0)
        {
            key=true;
            break;
        }
    }
    if(key)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    // for(auto it:v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // cout<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}