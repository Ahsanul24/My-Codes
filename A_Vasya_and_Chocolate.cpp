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
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int s, a, b, c;
    cin >> s >> a >> b >> c;
    ll ans = s / c;
    ll t = ans / a;
    ans += b * t;
    cout << ans << endl;
}
int main()
{
    Ahsanul;
    int test;
    cin >> test;
    w(test) s();
}