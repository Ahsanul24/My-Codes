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
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
}
int main()
{
    s();
}