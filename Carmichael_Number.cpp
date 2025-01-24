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
const int N = 1e5 + 10;
vector<bool> v(N, true);
bool seive(int n)
{

    v[0] = v[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (v[i])
        {
            for (int j = i * 2; j < N; j += i)
            {
                v[j]=false;
            }
        }
    }
    if(v[n])return true;
    else
    return false;
}
void solve()
{
    int n;
    cin >> n;
    if(seive(n))
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    w(t)
        solve();
}
