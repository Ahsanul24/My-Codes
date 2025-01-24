// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
// find_by_order() - Returns an iterator to the k-th largest element(counting from zero)
// order_of_key() - The number of items in a set that are strictly smaller than our item
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
    ll n,m; cin>>n>>m;
    string s; cin>>s;
    int sz=(int)s.size();
    vector<vector<ll>>v(n+1,vector<ll>(m+1,0));
    vector<ll>row_sum(n+1,0),col_sum(m+1,0);
    for(int i=1;i<=n;i++)
    {
        ll sum=0;
        for(int j=1;j<=m;j++)
        {
            cin>>v[i][j];
            sum+=v[i][j];
        }
        row_sum[i]=sum;
    }
    for(int j=1;j<=m;j++)
    {
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=v[i][j];
        }
        col_sum[j]=sum;
    }
    // for(int i=1;i<=n;i++)cout<<row_sum[i]<<" ";cout<<nl;
    // for(int i=1;i<=m;i++)cout<<col_sum[i]<<" ";cout<<nl;cout<<nl;
    int i=1,j=1;
    for(int k=0;k<sz;k++)
    {
        if(s[k]=='D')
        {
            //cout<<row_sum[i]<<nl;
            v[i][j]=row_sum[i]*(-1);
            col_sum[j]+=((-1)*row_sum[i]);
            i++;
        }
        else
        {
            ll tem=col_sum[j];
            v[i][j]=-tem;
            row_sum[i]+=((-1)*tem);
            j++;
        }
    }
    v[i][j]=-row_sum[i];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<nl;
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}