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
const int N=1e5+10;
pr tree[4*N];
pr make(pr a,pr b)
{
    if(a.f<b.f)return a;
    if(a.f>b.f)return b;
    else return {a.f,a.s+b.s};
}
void build(vi &v,int n,int beg,int end)
{
    if(beg==end)
    {
        tree[n]={v[beg],1};
        return;
    }
    int l=n*2+1;
    int r=n*2+2;
    int mid=(beg+end)/2;
    build(v,l,beg,mid);
    build(v,r,mid+1,end);
    tree[n]=make(tree[l],tree[r]);
}
pr query(int i,int j,int n,int beg,int end)
{
    if(i<=beg and j>=end)
    {
        return tree[n];
    }
    if(i>end or j<beg)
    {
        return {INT_MAX,0};
    }
    int l=n*2+1;
    int r=l+1;
    int mid=(beg+end)/2;
    pr p= query(i,j,l,beg,mid);
    pr q=query(i,j,r,mid+1,end);
    return make(p,q);
}
void update(int i,int n,int val,int beg,int end)
{
    if(beg==end and beg==i)
    {
        tree[n]={val,1};
        return;
    }
    if(beg>i or end<i)return;
    int l=n*2+1;
    int r=l+1;
    int mid=(beg+end)/2;
    update(i,l,val,beg,mid);
    update(i,r,val,mid+1,end);
    tree[n]=make(tree[l],tree[r]);
}
void solve()
{
    int n,q; cin>>n>>q;
    vi v(n);
    loop cin>>v[i];
    build(v,0,0,n-1);
    w(q)
    {
        int x; cin>>x;
        if(x==1)
        {
            int i,val; cin>>i>>val;
            update(i,0,val,0,n-1);
        }
        else
        {
            int l,r; cin>>l>>r;
            pr ans=query(l,r-1,0,0,n-1);
            cout<<ans.f<<" "<<ans.s<<nl;
        }
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}