// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
#include <string.h>
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
#define Ahsanul() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define N 1e5 + 7
void seive()
{
    vector<bool> v(N, true);
    v[0] = v[1] = false;
    for (int i = 2; i <= N; i++)
    {
        if (v[i])
        {

            for (int j = i * 2; j <= N; j += i)
            {
                v[j] = false;
            }
        }
    }
    for (int i = 0; i <= 100; i++)
    {
        if (v[i])
        {
            cout << i << " ";
        }
    }
}
int main()
{
    // int t; cin>>t;
    // w(t)
    // solve();
    seive();
}
