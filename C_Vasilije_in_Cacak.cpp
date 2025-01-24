// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(x) while (x--)
#define Ahsanul() (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll sum = (k * (k + 1)) / 2;
    ll summ = (2 * n - k + 1) * k / 2;
    if (sum > x || summ < x)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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