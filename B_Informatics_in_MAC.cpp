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
const int N = 1e5 + 10;
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    map<int, int> h;
    loop
    {
        cin >> v[i];
        h[v[i]]++;
    }
    vi tem = v;
    srt(tem);
    if (tem[0] == tem[n - 1])
    {
        cout << 2 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << n << " " << n << endl;
        return;
    }
    bool check = true;
    bool sobgula = true;
    int m = tem[n - 1];
    int nai = INT_MAX;
    for (int i = 0; i <= m; i++)
    {
        if (!h[i])
        {
            nai = i;
            break;
        }
    }
    if(h[0]==1)
    {
        cout<<-1<<endl;
        return;
    }
    if(nai==INT_MAX)
    {
        set<int>ff,ss;
        int r=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=m)
            {
                ff.insert(v[i]);
                if(ff.size()==(m+1))
                {
                    r=i+1;
                    break;
                }
            }
        }
        for(int i=r;i<n;i++)
        {
            if(v[i]<=m)
            {
                ss.insert(v[i]);
            }
        }
        if(ff.size()==ss.size())
        {
            cout<<2<<endl;
            cout<<1<<" "<<r<<endl;
            cout<<r+1<<" "<<n<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        return;
    }
    set<int>first,last;
    int r=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < nai)
        {
            first.insert(v[i]);
        }
        if (first.size() == nai)
        {
            r = i + 1;
            break;
        }
    }
    for (int i = r; i < n; i++)
    {
        if (v[i] < nai)
        {
            last.insert(v[i]);
        }
    }
    if(first.size()==last.size())
    {
        cout<<2<<endl;
        cout<<1<<" "<<r<<endl;
        cout<<r+1<<" "<<n<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    // cout<<nai<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}