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
ll n,k;
ll dp_sona[110][100020];
ll mar(int i,int w,vl &a,vl&b)
{
    if(w==0)return 0;
    if(i<0)return 0;
    if(dp_sona[i][w]!=-1)return dp_sona[i][w];
    ll ans=0+mar(i-1,w,a,b);
    if(w-a[i]>=0)
        ans=max(ans, b[i]+mar(i-1,w-a[i],a,b));
    return dp_sona[i][w]=ans;
}
void solve()
{
    cin>>n>>k;
    memset(dp_sona,-1,sizeof(dp_sona));
    vl a(n), b(n);
    loop
    {
        cin>>a[i];
        cin>>b[i];
    }
    ll ans=mar(n-1,k,a,b);
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}