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
const int N=2e5+10;
int tree[4*N];
void build(vi &v,int node,int beg,int end)
{
    if(beg==end)
    {
        tree[node]=v[beg];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    build(v,left,beg,mid);
    build(v,right,mid+1,end);
    tree[node]=gcd(tree[left],tree[right]);
}
int query(int node, int i, int j, int beg, int end)
{
    if (i > end or j < beg)
    {
        return 0;
    }
    if (i <= beg and j >= end)
    {
        return tree[node];
    }
    int left = node * 2;
    int right = node * 2+1;
    int mid = (beg + end) / 2;
    int p = query(left, i, j, beg, mid);
    int q = query(right, i, j, mid + 1, end);
    return gcd(p,q);
}
void solve()
{
    int n,q; cin>>n>>q;
    vi vv(n);
    loop cin>>vv[i];
    vi v(n-1);
    for(int i=1;i<n;i++)
    {
        v[i-1]=abs(vv[i]-vv[i-1]);
    }
    if(n==1)
    {
        w(q)
        {
            int x,y; cin>>x>>y;
            cout<<0<<" ";
        }
        cout<<nl;
        return;
    }
    build(v,1,0,n-2);
    w(q)
    {
        int x,y; cin>>x>>y;
        if(x==y)
        {
            cout<<0<<" ";
            continue;
        }
        cout<<query(1,x-1,y-2,0,n-2)<<" ";
    }
    cout<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}