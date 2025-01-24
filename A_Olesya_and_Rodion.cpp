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
void s()
{
    int n, t;
    cin >> n >> t;
    if (t == 10 && n > 2)
    {
        int i = 1, count = 0;
        for (; 1;)
        {
            cout << i;
            i++;
            count++;
            if (i == 10 && count != n)
            {
                i = 1;
            }
            if (count == n - 2)
            {
                cout << 0;
                break;
            }
        }
        cout << 0;
        return;
    }
    if (n == 1 && t == 10)
    {
        cout << -1;
        return;
    }
    if (n == 2 && t == 10)
    {
        cout << 10;
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
        return;
    }
}
int main()
{
    Ahsanul;
    s();
}