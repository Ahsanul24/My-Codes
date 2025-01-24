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
void dfs(int i,int j,int inicol,int cng,vector<vector<int>>&v)
{
    if(i<0 or j<0)return;
    int n=v.size();
    int m=v[0].size();
    if(i>=n or j>=m)return;
    if(v[i][j]!=inicol)return;
    v[i][j]=cng;
    dfs(i,j+1,inicol,cng,v);
    dfs(i+1, j, inicol, cng, v);
    dfs(i-1, j, inicol, cng, v);
    dfs(i, j-1, inicol, cng, v);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    dfs(sr, sc, image[sr][sc], color, image);
    return image;
}
int main()
{
    Ahsanul;
    int n, m, sr, sc, col;
    cin >> n >> m >> sr >> sc >> col;
    vector<vi> v(n, vi(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    auto it=floodFill(v,sr,sc,col);
    vector<vi>vv=it;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
}