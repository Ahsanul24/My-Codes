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
#define f first
#define s second
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
    int test;
    cin >> test;
    vi v(32, 0);
    w(test)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            v[b]++;
        }
        else
        {
            int i = 29;
            while (i >= 0)
            {
                if (v[i])
                {
                    int tem = (b / pow(2, i));
                    int temp = min(tem, v[i]);
                    b -= (temp * pow(2, i));
                }
                i--;
            }
            if (b == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
int main()
{
    Ahsanul;
    solve();
}