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
    int k, r;
    scanf("%d %d", &k, &r);
    if (k == 1)
    {
        printf("%d", r);
        return ;
    }
    int i = 1;
    while (1)
    {
        if ((i * k) % 10 == 0)
        {
            printf("%d", i);
            break;
        }
        else if (((i * k) - r) % 10 == 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
}
int main()
{
    Ahsanul;
    solve();
}