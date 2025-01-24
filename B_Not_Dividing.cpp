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
void s()
{
    int n;
    cin >> n;
    vi v(n);
    loop
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            v[i] = 2;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] % v[i] == 0)
        {
            v[i + 1] = v[i + 1] + 1;
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
        s();
}