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
#define Ahsanul() (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int x, n, m;
    cin >> x >> n >> m;
    if (x - (m * 10) <= 0)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        x = (x >> 1) + 10;
    }
    x -= (10 * m);
    if (x <= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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