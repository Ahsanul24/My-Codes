// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

void solve()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a.size() << endl;
        return;
    }
    int cnt=0,maxi=INT_MIN;
    string mil,tem="";
    for(int i=0;i<b.size();i++)
    {
        int idx=i;
        for(int j=0;j<a.size();j++)
        {
            if(b[idx]==a[j])
            {
                cnt++;
                idx++;
                if(j==a.size()-1)break;
            }
        }
        maxi=max(maxi,cnt);
        cnt=0;
    }
    maxi=max(maxi,cnt);
    //cout<<maxi<<endl;
    cout<<a.size()+(b.size()-maxi)<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}