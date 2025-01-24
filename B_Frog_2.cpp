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
const int N = 1e5 + 10;
int h[N], k;
int dp[N];
int solve(int a)
{
    if (a == 0)
        return 0;
    int cost = INT_MAX;
    if (dp[a] != -1)
        return dp[a];
    for (int i = 1; i <= k; i++)
    {
        if (a - i >= 0)
            cost = min(cost, solve(a - i) + abs(h[a - i] - h[a]));
    }
    return dp[a] = cost;
}
int main()
{
    Ahsanul;
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n >> k;
    loop cin >> h[i];
    cout << solve(n - 1);
}