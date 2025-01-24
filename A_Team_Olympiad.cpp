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
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void s()
{
    int n;
    cin >> n;
    vi v(n);
    loop cin >> v[i];
    int one = 0, two = 0, three = 0;
    vi o, t, th;
    loop
    {
        if (v[i] == 1)
        {
            one++;
            o.pb(i + 1);
        }
        else if (v[i] == 2)
        {
            two++;
            t.pb(i + 1);
        }
        else
        {
            three++;
            th.pb(i + 1);
        }
    }
    int temp = min({one, two, three});
    if (temp == 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << temp << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << o[i] << " " << t[i] << " " << th[i] << endl;
    }
}
int main()
{
    s();
}