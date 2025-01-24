// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N=2*1e5+10;
ll a[N];
int sz;
struct tree
{
    ll prop=0,sum=0;
}tree[4*N];
void build(int node=0,int beg=0,int end=sz)
{
    if(beg==end)
    {
        tree[node].sum=a[beg];
        tree[node].prop=0;
        return;
    }
    int left=node*2+1;
    int right=left+1;
    int mid=beg+(end-beg)/2;
    build(left,beg,mid);
    build(right,mid+1,end);
    tree[node].sum=tree[left].sum+tree[right].sum;
}
ll query(ll i,ll j,ll carry=0,ll node=0,ll beg=0,ll end=sz)
{
    if(i>end or j<beg)
    {
        return 0;
    }
    if(beg>=i and j>=end)
    {
        return tree[node].sum+(end-beg+1)*carry;
    }
    ll left = node * 2 + 1;
    ll right = left + 1;
    ll mid = beg + (end - beg) / 2;
    ll p=query(i,j,carry+tree[node].prop,left,beg,mid);
    ll q=query(i,j,carry+tree[node].prop,right,mid+1,end);
    return (p+q);
}
void update(ll i,ll j,ll val,ll node=0,ll beg=0,ll end=sz)
{
    if(i>end or j<beg)
    {
        return;
    }
    if(beg>=i and j>=end)
    {
        tree[node].sum+=(end-beg+1)*val;
        tree[node].prop+=val;
        return;
    }
    ll left = node * 2 + 1;
    ll right = left + 1;
    ll mid = beg + (end - beg) / 2;
    update(i,j,val,left,beg,mid);
    update(i,j,val,right,mid+1,end);
    tree[node].sum=tree[left].sum+tree[right].sum+(end-beg+1)*tree[node].prop;
}
void solve()
{
    ll n,q; cin>>n>>q;
    sz=n-1;
    loop cin>>a[i];
    build();
    w(q)
    {
        ll t; cin>>t;
        if(t==1)
        {
            ll x,y,z; cin>>x>>y>>z;
            x--,y--;
            update(x,y,z);
        }
        else
        {
            ll x; ;cin>>x;
            x--;
            cout<<query(x,x)<<endl;
        }
    }
    //for(int i=0;i<20;i++)cout<<tree[i].sum<<" ";
}
int main()
{
    Ahsanul;
    //test
    solve();
}