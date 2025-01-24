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
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int n;
    cin >> n;
    vi v(n);
    for (int &x : v)
    {
        cin >> x;
    }
    int a = 0, b = 0;
    int at = 0, bt = 0;
    for (int i = 0, j = n - 1;;)
    {
        while (at <= bt)
        {
            if (i > j)
                break;
            a++;
            at += v[i];
            i++;
        }
        while (at > bt)
        {
            if (i > j)
                break;
            b++;
            bt += v[j];
            j--;
        }
        if (i > j)
            break;
    }
    cout << a << " " << b << endl;
}
int main()
{
    s();
}