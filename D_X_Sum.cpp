// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum = 0;
            int cr=i,cc=j;
            while(cr<n and cc<m)
            {
                sum+=a[cr][cc];
                cr++;
                cc++;
            }
            int kr=i-1,kc=j-1;
            while(kr>=0 and kc>=0)
            {
                sum+=a[kr][kc];
                kr--;
                kc--;
            }
            int wr=i+1,wc=j-1;
            while (wr<n and wc>=0)
            {
                sum+=a[wr][wc];
                wr++;
                wc--;
            }
            int xr=i-1,xc=j+1;
            while(xr>=0 and xc<m)
            {
                sum+=a[xr][xc];
                xr--;
                xc++;
            }
            ans = max(sum, ans);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}