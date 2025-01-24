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
#define nl '\n';
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd<long long int>(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n,m,l; cin>>n>>m>>l;
    vector<pr>hard;
    for(int i=0;i<n;i++)
    {
        int x,v; cin>>x>>v;
        hard.pb({x,v});
    }
    deque<pr>bara;
    for(int i=0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        bara.pb({x,y});
    }
    ll ans=0,sum=1;
    bool check=true;
    priority_queue<int>po;
    for(int i=0;i<n;i++)
    {
        while(bara.front().first<=hard[i].f and (int)bara.size()>0)
        {
            po.push(bara.front().second);
            bara.pop_front();
        }
        ll dorkar=hard[i].s-hard[i].f+2;
        while(sum<dorkar and (int)po.size()>0)
        {
            sum+=po.top();
            ans++;
            po.pop();
        }
        if(sum<dorkar)
        {
            check=false;
            break;
        }
    }
    if(!check)
    {
        cout<<-1<<nl;
        return;
    }
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}