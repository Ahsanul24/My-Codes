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
int dp[100010][4];
int n;
vector<vi> v;
int call(int day,int last)
{
    if(day==n-1)
    {
        int maxi=0;
        for(int i=0;i<3;i++)
        {
            if(i!=last)
            {
                if(v[n-1][i]>maxi)
                {
                    maxi=v[n-1][i];
                    dp[n-1][i]=maxi;
                }
            }
        }
        return dp[day][last]= maxi;
    }
    if(dp[day][last]!=0)return dp[day][last];
    int maxi=0;
    for(int i=0;i<3;i++)
    {
        if(i!=last)
        {
            int hapi=call(day+1,i)+v[day][i];
            maxi=max(maxi,hapi);
            if(maxi<hapi)
            {
                maxi=hapi;
                dp[day][i]=hapi;
            }
        }
    }
    return dp[day][last] = maxi;
}
void solve()
{
    cin>>n;
    v.resize(n,vi (3));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }
    int ans=call(0,-1);
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}