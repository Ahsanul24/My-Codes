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
    int n, m;
    cin >> n >> m;
    vi v(n);
    loop cin >> v[i];
    map<string, int> ma;
    string s;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        ma[s]++;
    }
    vi q;
    for (auto i : ma)
    {
        q.pb(i.S);
    }
    vi copy = v;
    rsrt(q);
    srt(v);
    int min = 0, max = 0;
    for (int i = 0; i < q.size(); i++)
    {
        min += (q[i] * v[i]);
    }
    rsrt(copy);
    for (int i = 0; i < q.size(); i++)
    {
        max += (q[i] * copy[i]);
    }
    cout << min << " " << max << endl;
}
int main()
{
    s();
}