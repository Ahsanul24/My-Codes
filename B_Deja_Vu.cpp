// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n, m;
    cin >> n >> m;
    vl v(n);
    loop cin >> v[i];
    vi vv(m);
    map<int, int> map;
    for (int i = 0; i < m; i++)
    {
        cin >> vv[i];
        map[vv[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (map[vv[i]])
        {
            map[vv[i]]=0;
            int tem = pow(2, vv[i]);
            for (int j = 0; j < n; j++)
            {
                if (v[j] % tem == 0)
                {
                    v[j] += (pow(2, vv[i] - 1));
                }
            }
        }
    }
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}