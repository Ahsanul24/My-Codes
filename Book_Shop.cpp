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
vi a(100001), b(100001);

int call(int k,int idx,vector<vi>&dp_sona)
{
    int ans=0;
    if(idx<0 or k<=0)
    {
        return 0;
    }
    if(dp_sona[idx][k]!=-1)return dp_sona[idx][k];
    ans=0+call(k,idx-1,dp_sona);
    if(k-a[idx]>=0)
        ans=max(ans,b[idx]+call(k-a[idx],idx-1,dp_sona));
    return dp_sona[idx][k] = ans;
}
void solve()
{
    int n,k; cin>>n>>k;
    vi dp_sona(k+1,0);
    loop cin>>a[i];
    loop cin>>b[i];
    for(int i=0;i<n;i++)
    {
        for(int j=k;j>0;j--)
        {
            if(a[i]>j)continue;
            dp_sona[j]=max(dp_sona[j],b[i]+dp_sona[j-a[i]]);
            //cout<<dp_sona[j]<<" ";
        }
    }
    cout<<dp_sona[k]<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}