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
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
bool vis[302][302];
void dfs(vector<vector<char>>&grid,int n,int m,int i,int j)
{
    vis[i][j]=true;
    if(i-1>=0 and !vis[i-1][j] and grid[i-1][j]!='0')dfs(grid,n,m,i-1,j);
    if(i+1<n and !vis[i+1][j] and grid[i+1][j]!='0')dfs(grid,n,m,i+1,j);
    if(j-1>=0 and !vis[i][j-1] and grid[i][j-1]!='0')dfs(grid,n,m,i,j-1);
    if(j+1<m and !vis[i][j+1] and grid[i][j+1]!='0')dfs(grid,n,m,i,j+1);
}
int numIslands(vector<vector<char>> &grid)
{
    int n=grid.size();
    int m=grid[0].size();
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] and grid[i][j]!='0')
            {
                dfs(grid,n,m,i,j);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int n,m; cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m,'0'));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<numIslands(v);
}