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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N = 2*1e5+10;
int a[N];
ll tree[4*N];
int sz;
void build(int node=0,int beg=0,int end=sz)
{
    if(beg==end)
    {
        tree[node]=a[beg];
        return;
    }
    build((node*2+1),beg,(beg+(end-beg)/2));
    build((node*2+2),((beg+(end-beg)/2)+1),end);
    tree[node]=tree[(node*2+1)]+tree[(node*2+2)];
}
void update(int idx,int val,int node=0,int beg=0,int end=sz)
{
    if(idx>end or idx<beg)
    {
        return;
    }
    if(beg>=idx and idx>=end)
    {
        tree[node]=val;
        return;
    }
    int left=node*2+1;
    int right=node*2+2;
    int mid=beg+(end-beg)/2;
    update(idx,val,left,beg,mid);
    update(idx,val,right,mid+1,end);
    tree[node]=tree[left]+tree[right];
}
ll query(int i,int j,int node=0,int beg=0,int end=sz)
{
    if(i>end or j<beg)
    {
        return 0;
    }
    if(beg>=i and j>=end)
    {
        return tree[node];
    }
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = beg + (end - beg) / 2;
    return (query(i,j,left,beg,mid)+query(i,j,right,mid+1,end));
}
void solve()
{
    int n,q; cin>>n>>q;
    sz=n-1;
    loop cin>>a[i];
    build();
    w(q)
    {
        int u,x,y; cin>>u>>x>>y;
        if(u==1)
        {
            x--;
           update(x,y);
        }   
        else
        {
           x--,y--;
           cout<<query(x,y)<<endl;
        }
    }

}
int main()
{
    Ahsanul;
    //test
    solve();
}