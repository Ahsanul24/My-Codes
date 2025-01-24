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
vector<pr> knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}}; // knight moves
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};          // eight direction moves;
const int N=2*1e5+10;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int dp_sona[n+2]={};
    string s;
    cin >> s;
    s='L'+s+'L';
    dp_sona[n+1]=0;
    for(int i=n;i>=0;i--)
    {
        if(s[i]=='C')
        {
            dp_sona[i]=N;
        }
        else if(s[i]=='W')
        {
            dp_sona[i]=dp_sona[i+1]+1;

        }
        else
        {
            dp_sona[i]=N;
            int j;
            for(j=1;j<=m and (i+j)<=n+1;j++)
            {
                dp_sona[i]=min(dp_sona[i],dp_sona[j+i]);
            }
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<dp_sona[i]<<" ";
    // }
    // cout<<endl;
    if(dp_sona[0]<=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}