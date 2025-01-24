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
const int N=110;
int dp_sona[4][N];
int call(vi &v,int last,int idx)
{
    if(idx+1>v.size())return 0;
    if(dp_sona[last][idx]!=-1)return dp_sona[last][idx];
    if(v[idx]==0)
    {
        return dp_sona[last][idx] = (1+call(v,0,idx+1));
    }
    else if(v[idx]==1)
    {
        if(last==1)
        {
            return dp_sona[last][idx] = (1+call(v,0,idx+1));
        }
        else
        {
            return dp_sona[last][idx] = min(call(v,1,idx+1),(1+call(v,0,idx+1)));
        }
    }
    else if(v[idx]==2)
    {
        if(last==2)
        {
            return dp_sona[last][idx] = (1+call(v,0,idx+1));
        }
        else
        {
            return dp_sona[last][idx] = min(call(v,2,idx+1),(1+call(v,0,idx+1)));
        }
    }
    else
    {
        if(last==0)
        {
            return dp_sona[last][idx] = min(call(v,1,idx+1),call(v,2,idx+1));
        }
        else if(last==1)
        {
            return dp_sona[last][idx] = min(call(v,0,idx+1)+1,call(v,2,idx+1));
        }
        else
        {
            return dp_sona[last][idx] = min(call(v,0,idx+1)+1,call(v,1,idx+1));
        }
    }
}   
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    memset(dp_sona,-1,sizeof(dp_sona));
    int res=call(v,0,1);
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}