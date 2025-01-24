// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define nl '\n';
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd<long long int>(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n,x,y; cin>>n>>x>>y;
    vector<int>ans(n+1,-1);
    ans[1]=0;
    for(int i=2;i<=n;i++)
    {
        int a=-1,b=-1,c=-1;
        a=ans[i-1],b=ans[i+1];
        if(i+1>n)b=ans[1];
        if(x==i)c=ans[y];
        if(y==i)c=ans[x];
        //cout<<a<<" "<<b<<" "<<c<<nl;
        set<int>arr({a,b,c});
        int tem=-1;
        for(int i=0;i<=3;i++)
        {   
            if(arr.find(i)==arr.end())
            {
                tem=i;
                break;
            }
        }
        ans[i]=tem;
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";cout<<nl;
    ans.clear();
}
int main()
{
    Ahsanul;
    test
    solve();
}