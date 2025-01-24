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
#define Ahsanul() (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int n, s, r;
    cin >> n >> s >> r;
    vi v;
    int temp = s - r;
    v.pb(temp);
    for (int i = 0; i < n - 1; i++)
    {
        v.pb(1);
        r--;
    }
    int i = 0;
    while (r != 0)
    {
        if (v[i] < temp)
        {
            v[i]++;
            r--;
        }
        else
        {
            i++;
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
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