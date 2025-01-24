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
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
int dp[1010][1010];
void callde(vector<int>&a,vector<int>&b)
{
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            int idx=i+1,idy=j+1;
            if(a[i]==b[j])
            {
                dp[i+1][j+1]=1+dp[i][j];
            }
            else
            {
                dp[i+1][j+1]=max(dp[idx-1][idy],dp[idx][idy-1]);
            }
        }
    }
}
void solve()
{
    int n,k; cin>>n>>k;
    vector<int>a(n);
    loop cin>>a[i];
    vector<vector<int>>v(n,vector<int>(n,0));
    for(int i=1;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    vi tem,ans;
    tem=a;
    for(int i=1;i<k;i++)
    {
        ans={};
        callde(tem,v[i]);
        int idx=tem.size(),idy=n;
        while(idx>0 and idy>0)
        {
            if(tem[idx-1]==v[i][idy-1])
            {
                ans.pb(tem[idx-1]);
                idx--;
                idy--;
            }
            else if(dp[idx][idy-1]>dp[idx-1][idy])
            {
                idy--;
            }
            else
            {
                idx--;
            }
        }
        tem={};
        reverse(ans.begin(),ans.end());
        tem=ans;
        for(int j=0;j<1010;j++)
        {
            for(int k=0;k<1010;k++)
            {
                dp[j][k]=0;
            }
        }
    }
    //print(ans);
    cout<<ans.size()<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}