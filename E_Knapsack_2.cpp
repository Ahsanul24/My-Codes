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
#define pr pair<ll, ll>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
ll dp_sona[110][100010];
ll laga( ll idx,ll left,vl &a,vl &b)
{
    if (left == 0)return 0;
    if(idx<0)return 1e15;
    if (dp_sona[idx][left] != -1)
        return dp_sona[idx][left];
    ll ans=laga(idx-1,left,a,b);
    if(left-b[idx]>=0)
        ans=min(ans,a[idx]+laga(idx-1,left-b[idx],a,b));
    return dp_sona[idx][left]= ans;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    memset(dp_sona,-1,sizeof(dp_sona));
    vl a(n),b(n);
    loop  cin>>a[i],cin>>b[i];
    ll ans=1e5;
    for(ll i=ans;i>=0;i--)
    {
        if(laga(n-1,i,a,b)<=k)
        {
            cout<<i<<endl;
            break;
        }
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}