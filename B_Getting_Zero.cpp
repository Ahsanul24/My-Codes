// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 32768;
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
const int N=1e5+10;
ll dp_sona[N][16];
ll call(ll n,int cnt)
{
    ll res=INT_MAX;
    n%=MOD;
    if (n == 0)
    {
        return 0;
    }
    if(cnt>=15)
    {
        return MOD;
    }
    if (dp_sona[n][cnt] != -1)
    {
        return dp_sona[n][cnt];
    }
    res=1+min(call((n+1),++cnt),call((2*n),++cnt));
    return dp_sona[n][cnt]= res;
}
void solve()
{
    ll n; cin>>n;
    if(n==0)
    {
        cout<<0<<" ";
        return;
    }
    // memset(dp_sona,-1,sizeof(dp_sona));
    // ll cnt=0;
    // ll ans=call(n,cnt);
    // cout<<ans<<" ";
    int ans=MOD-n;
    for(int i=0;i<16;i++)
    {
        int tem=n+i;
        int idx=i;
        while(tem)
        {
            idx++;
            tem*=2;
            tem%=MOD;
        }
        ans=min(ans,idx);
    }
    cout<<ans<<" ";
}
int main()
{
    Ahsanul;
    test
    {
        solve();
    }
}