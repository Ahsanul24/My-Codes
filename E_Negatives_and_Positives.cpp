// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1e9 + 7
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
    int n;
    cin >> n;
    vi v(n);
    int neg = 0;
    int bacca = INT_MAX, negbacca = INT_MIN;
    ll sum = 0, negsum = 0;
    loop
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            neg++;
            negsum += v[i];
            negbacca = max(negbacca, v[i]);
            sum += (-v[i]);
        }
        else
        {
            sum += v[i];
            bacca = min(v[i], bacca);
        }
    }
    srt(v);
    if (sum == -negsum and neg & 1)
    {
        cout << sum + 2 * v[n - 1] << endl;
        return;
    }

    if (neg)
    {
        if (neg & 1)
        {
            if (-negbacca > bacca)

                cout << sum - 2 * bacca << endl;

            else

                cout << sum + 2 * negbacca << endl;
        }
        else
            cout << sum << endl;
        return;
    }
    cout << sum << endl;
}
int main()
{
    Ahsanul;
    test solve();
}