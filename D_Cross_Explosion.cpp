// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n,m,q; cin>>n>>m>>q;
    vector<set<int>>r(n),c(m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            r[i].insert(j);
            c[j].insert(i);
        }
    }
    ll ans=n*1ll*m;
    w(q)
    {
        int x,y; cin>>x>>y;
        x--,y--;
        if(r[x].find(y)!=r[x].end())
        {
            ans--;
            r[x].erase(y);
            c[y].erase(x);
        }
        else
        {
            auto it=r[x].lower_bound(y);
            if(it!=r[x].begin())
            {
                auto itt=prev(it);
                r[x].erase(*itt);
                c[*itt].erase(x);
                ans--;
            }
            if(it!=r[x].end())
            {
                ans--;
                r[x].erase(*it);
                c[*it].erase(y);
            }
            it=c[y].lower_bound(x);
            if(it!=c[y].begin())
            {
                auto itt=prev(it);
                ans--;
                c[y].erase(*itt);
                r[*itt].erase(y);
            }
            if(it!=c[y].end())
            {
                ans--;
                c[y].erase(*it);
                r[*it].erase(y);
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}