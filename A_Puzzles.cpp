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
#define w(x) while (x--)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int n, m;
    cin >> n >> m;
    vi v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    srt(v);
    int a = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        a = min(a, abs(v[i] - v[i + n - 1]));
    }
    cout << a << endl;
}
int main()
{
    Ahsanul;
    s();
}