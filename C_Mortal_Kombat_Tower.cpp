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
int n;
vi v(200010);
int dp[200010][2];
int cnt(int i,int turn)
{
    if(i>=n)return dp[i][turn]=0;
    if(dp[i][turn]!=-1)return dp[i][turn];
    if(turn)
    {
        int mini=INT_MAX;
        if(i<n and v[i]==1)
        {
            mini=min(mini,cnt(i+1,turn^1)+1);
        }
        if(i<n and v[i]==0)
        {
            mini=min(mini,cnt(i+1,turn^1));
        }
        if(i+1<n and v[i]==0 and v[i+1]==1)
        {
            mini=min(mini,cnt(i+2,turn^1)+1);
        }
        if(i+1<n and v[i]==1 and v[i+1]==0)
        {
            mini=min(mini,cnt(i+2,turn^1)+1);
        }
        if(i+1<n and v[i]==1 and v[i+1]==1)
        {
            mini=min(mini,cnt(i+2,turn^1)+2);
        }
        if(i+1<n and v[i]==0 and v[i+1]==0)
        {
            mini=min(mini,cnt(i+2,turn^1));
        }
        return dp[i][turn]=mini;
    }
    else
    {
        int mini=INT_MAX;
        mini=min((cnt(i+2,turn^1)),(cnt(i+1,turn^1)));
        return dp[i][turn]=mini;
    }
}
void solve()
{
    cin>>n;
    loop cin >> v[i];
    memset(dp, -1, sizeof(dp));
    cnt(0,1);
    cout<<dp[0][1]<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}