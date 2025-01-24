// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=1e5+10;
map<pr,int>path,vis,dis;
int x,y,xx,yy;
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
vector<pr>move(int x,int y)
{
    vector<pr>res;
    for(int i=0;i<8;i++)
    {
        int x_x=x+posible[i].f;
        int y_y=y+posible[i].s;
        res.pb({x_x,y_y});
    }
    return res;
}
void bfs(int sour_x,int sour_y,int des_x,int des_y)
{
    vis[{sour_x,sour_y}]=1;
    queue<pr>q;
    q.push({sour_x,sour_y});
    while(!q.empty())
    {
        pr curr=q.front();
        q.pop();
        for(auto child:move(curr.f,curr.s))
        {
            if(!vis[{child.f,child.s}] and path[{child.f,child.s}])
            {
                q.push({child.f,child.s});
                vis[{child.f,child.s}]=1;
                dis[{child.f,child.s}]=dis[{curr.f,curr.s}]+1;
                if(vis[{des_x,des_y}])
                {
                    return;
                }
            }
        }
    }
}
void solve()
{
    cin>>x>>y>>xx>>yy;
    int m; cin>>m;
    for(int i=0;i<m;i++)
    {
        int r,a,b; cin>>r>>a>>b;
        for(int i=a;i<=b;i++)
        {
            path[{r,i}]++;
        }
    }
    bfs(x,y,xx,yy);
    if(!vis[{xx,yy}])
    {
        cout<<-1<<endl;
        return;
    }
    cout<<dis[{xx,yy}]<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}