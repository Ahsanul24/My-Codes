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
    int l, r;
    cin >> l >> r;
    if (r <= 3)
    {
        cout << -1 << endl;
        return;
    }
    if (l == r)
    {
        int div=0;
        for(int i=2;i*i<=l;i++)
        {
            if(l%i==0)
            {
                div=i;
                break;
            }
        }
        if(div==0)
        {
            cout<<-1<<endl;
            return;
        }
        cout<<div<<" "<<l-div<<endl;
        return;
    }
    cout<<r/2<<" "<<r/2<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}