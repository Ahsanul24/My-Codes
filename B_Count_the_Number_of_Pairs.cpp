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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> low(27, 0), high(27, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            low[s[i] - 97]++;
        }
        else
        {
            high[s[i] - 65]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 27; i++)
    {
        int temp = min(low[i], high[i]);
        ans += temp;
        low[i] -= temp;
        high[i] -= temp;
    }

    for (int i = 0; i < 27; i++)
    {
        if (low[i] >= 2)
        {
            int muni = low[i] / 2;
            if (muni <= k)
            {
                ans += muni;
                k -= muni;
                if (k == 0)
                    break;
            }
            else
            {
                ans += k;
                k = 0;
                if (k == 0)
                    break;
            }
        }
        else if (high[i] >= 2)
        {
            int ovi = high[i] / 2;
            if (ovi <= k)
            {
                ans += ovi;
                k -= ovi;
                if (k == 0)
                    break;
            }
            else
            {
                ans += k;
                k = 0;
                if (k = 0)
                    break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int test;
    cin >> test;
    w(test)
        s();
}