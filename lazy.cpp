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
const int N=1e5+10;
struct tre
{
    int sum,prop;
}tree[3*N];
vi v(N);
void build(int node,int beg,int end)
{
    if(beg==end)
    {
        tree[node].sum=v[beg];
        return;
    }
    int mid=beg+(end-beg)/2;
    int left=node*2+1;
    int right=left+1;
    build(left,beg,mid);
    build(right,mid+1,end);
    tree[node].sum=tree[left].sum+tree[right].sum;//check here
}
int query(int i,int j,int node,int beg,int end)
{
    if(j<beg or i>end)
    {
        return 0;
    }
    if(i<=beg and j>=end)
    {
        return tree[node].sum;
    }
    int mid=beg+(end-beg)/2;
    int left=node*2+1;
    int right=left+1;
    return query(i,j,left,beg,mid)+query(i,j,right,mid+1,end);//check here
}
void update(int i,int j,int node,int beg,int end,int val)
{
    if(j<beg or i>end)
    {
        return;
    }
    if(i<=beg and j>=end)
    {
        tree[node].sum+=((end-beg+1)*val);
        tree[node].prop+=val;
        return;
    }
    int mid=beg+(end-beg)/2;
    int left=node*2+1;
    int right=left+1;
    update(i,j,left,beg,mid,val);
    update(i,j,right,mid+1,end,val);
    tree[node].sum=tree[left].sum+tree[right].sum+(end-beg+1)*tree[node].prop;//check here
}
void solve()
{
    int n; cin>>n;
    loop cin>>v[i];
    build(0,0,n-1);
    int q; cin>>q;
    w(q)
    {
        int t; cin>>t;
        if(t==1)
        {
            int x,y; cin>>x>>y;
            x--;y--;
            cout<<query(x,y,0,0,n-1)<<endl;
        }
        else
        {
            int x,y,val; cin>>x>>y>>val;
            x--,y--;
            update(x,y,0,0,n-1,val);
        }
    }
}
int main()
{
    Ahsanul;
    //test
    solve();
}