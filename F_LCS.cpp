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
int dp[3005][3005];
void solve()
{
    string a,b; cin>>a>>b;
    int n=a.size(),m=b.size();
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
    int i=n,j=m;
    string res="";
    while(i>0 and j>0)
    {
        if(a[i-1]==b[j-1])
        {
            res+=a[i-1];
            i--;
            j--;
        }
        else if(dp[i][j-1]>dp[i-1][j])
        {
            j--;
        }
        else
        {
            i--;
        }
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}