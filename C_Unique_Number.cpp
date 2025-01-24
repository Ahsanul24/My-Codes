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
void s()
{
    int n;
    cin >> n;
    int copy = n;
    vi v;
    if (n <= 9)
    {
        cout << n << endl;
        return;
    }
    int sum = 0, i = 9;
    while (i != 0)
    {
        v.pb(i);
        sum += i;
        n -= i;
        if (n < i)
        {
            v.pb(n);
            sum += n;
            break;
        }
        i--;
    }
    srt(v);
    if (sum == copy)
    {
        for (auto i : v)
        {
            cout << i;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    w(test)
    {
        s();
    }
}