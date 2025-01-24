// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <queue>
#include <stack>
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
int n,m;
char str[51][51];
int dis[51][51];
void dfs(int i,int j,int d)
{
    int x,y;
    dis[i][j]=d+1;
    //1st
    x=i-1;
    y=j;
    if(x<n and y<m and x>=0 and y>=0 and str[x][y]==str[i][j]+1 and dis[x][y]<dis[i][j]+1)
    {
        dfs(x,y,dis[i][j]);
    }
    //2nd
    x = i;
    y = j-1;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
    //3rd
    x = i + 1;
    y = j;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
    //4th
    x = i;
    y = j+1;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
    //5th
    x = i - 1;
    y = j-1;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
    //6th
    x = i +1;
    y = j+1;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
    //7th
    x = i - 1;
    y = j+1;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
    //8th
    x = i + 1;
    y = j - 1;
    if (x < n and y < m and x >= 0 and y >= 0 and str[x][y] == str[i][j] + 1 and dis[x][y] < dis[i][j] + 1)
    {
        dfs(x, y, dis[i][j]);
    }
}
int main()
{
    Ahsanul;
    int ans=0,tc=1;
    while(true)
    {
        cin>>n>>m;
        if(n==0 and m==0)
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
            for(int j=0;j<m;j++)
            {
                dis[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(str[i][j]=='A' and dis[i][j]==0)
                {
                    dfs(i,j,0);
                }
            }
        }
        int ans=dis[0][0];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,dis[i][j]);
            }
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;
        tc++;
    }
}