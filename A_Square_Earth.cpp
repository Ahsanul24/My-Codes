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
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0}};//eight direction moves;
const int N=1001;
bool vis[N][N];
int lev[N][N];
vector<pr>parbe(int x,int y,int n)
{
    vector<pr>ans;
    for(auto it:posible)
    {
        int xx=x+it.f;
        int yy=y+it.s;
        if(xx==0  or xx==n or yy==0 or yy==n)
        {
            ans.pb({xx,yy});
        }
    }
    return ans; 
}
void bfs(int sourx,int soury,int desx,int desy,int n)
{
    vis[sourx][soury]=true;
    queue<pr>q;
    q.push({sourx,soury});
    while(!q.empty())
    {   
        pr curr=q.front();
        q.pop();
        vector<pr>mar=parbe(curr.f,curr.s,n);
        for(auto child:mar)
        {
            if(!vis[child.f][child.s])
            {
                q.push({child.f,child.s});
                vis[child.f][child.s]=true;
                lev[child.f][child.s]=min(lev[child.f][child.s],lev[curr.f][curr.s]+1);
            }
        }
        if(curr.f==desx and curr.s==desy)
        {
            break;
        }
    }
}
void solve()
{
    int n,x,y,a,b; cin>>n>>x>>y>>a>>b;
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=N;j++)
        {
            lev[i][j]=1000;
        }
    }
    lev[x][y]=0;
    bfs(x,y,a,b,n);
    cout<<lev[a][b]<<endl;

}
int main()
{
    Ahsanul;
 //   test
    solve();
}