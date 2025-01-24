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
int dfs(vector<vector<int>>&mat,vector<vector<int>>&a,int i,int j,int row,int col)
{
    if(a[i][j]!=-1)
    {
        return a[i][j];
    }
    if(i<0 or j<0)return 0;
    if(i>row-1 or j>col-1)return 0;
    int curr=1;
    if(i+1<row and mat[i+1][j]>mat[i][j])
    {
       curr=max( curr,1+ dfs(mat,a,i+1,j,row,col));
    }
    if(i-1>=0 and mat[i-1][j]>mat[i][j])
    {
       curr=max(curr,1+ dfs(mat,a,i-1,j,row,col));
    }
    if(j+1<col and mat[i][j+1]>mat[i][j])
    {
       curr=max(curr,1+ dfs(mat,a,i,j+1,row,col));
    }
    if(j-1>=0 and mat[i][j-1]>mat[i][j])
    {
       curr=max(curr,1+ dfs(mat,a,i,j-1,row,col));
    }
    a[i][j]=curr;
    return curr;
}
int longestIncreasingPath(vector<vector<int>> &matrix)
{
    int row=matrix.size();
    int col=matrix[0].size();
    vector<vector<int>>a(row,vector<int>(col,-1));
    int len=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           len=max(len,dfs(matrix,a,i,j,row,col));
        }
    }
    return len;
}
void solve()
{
    int n,m; cin>>n>>m;
    vector<vi>matrix(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>> matrix[i][j];
        }
    }
    cout<<longestIncreasingPath(matrix);
}
int main()
{
    Ahsanul;
    solve();
}