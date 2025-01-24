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
double dp_sona[3000][3000];
bool vis[3000][3000];
double call(vector<double>&v,int n,int h,int t)
{
    if(h+t==n)
    {
        return h>t;
    }
    if(vis[h][t])return dp_sona[h][t];
    vis[h][t]=true;
    return dp_sona[h][t]=(v[h+t]*(call(v,n,h+1,t)))+((1-v[h+t])*(call(v,n,h,t+1)));
}
void solve()
{
    int n; cin>>n;
    vector<double>v(n);
    loop cin>>v[i];
    memset(dp_sona,-1,sizeof(dp_sona));
    cout<<setprecision(13)<<call(v,n,0,0);

}
int main()
{
    Ahsanul;
 //   test
    solve();
}