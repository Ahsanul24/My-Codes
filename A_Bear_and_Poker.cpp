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
void solve()
{
    int n;
    cin >> n;
    bool check = true;
    ll ratio;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        while (a % 2 == 0)
            a /= 2;
        while (a % 3 == 0)
            a /= 3;
        if (i == 0)
            ratio = a;
        else if (ratio != a)
        {
            check = false;
        }
    }
    if (check)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    Ahsanul;
    solve();
}