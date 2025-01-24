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
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n; cin>>n;
    vi v(n);
    loop cin>>v[i];
    int cnt=0;
    int gc=v[0];
    int prothom=v[1];
    for(int i=1;i<n;i++)
    {
        gc=gcd(gc,v[i]);
        prothom=gcd(prothom,v[i]);
    }
    if(gc>1)
    {
        cout<<n<<endl;
        return;
    }
    vi pre(n),suff(n);
    pre[0]=v[0];
    int tem=v[n-2];
    for(int i=1;i<n;i++)
    {
        pre[i]=gcd(pre[i-1],v[i]);
    }
    suff[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suff[i]=gcd(suff[i+1],v[i]);
        tem=gcd(tem,v[i]);
    }
    //print(pre);
    //print(suff);
    int ans=0;
    if(prothom>1)
    {
        ans++;
    }
    if(tem>1)
    {
        ans++;
    }
    for(int i=1;i<n-1;i++)
    {
        if(gcd(pre[i-1],suff[i+1])!=1)ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}