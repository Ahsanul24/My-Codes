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
const int N=5e5+10;
int Tree[4*N];
void build(vector<int> v,int node,int beg,int end)
{
    if(beg==end)
    {
        Tree[node]=v[beg];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    build(v,left,beg,mid);
    build(v,right,mid+1,end);
    Tree[node]=gcd(Tree[left],Tree[right]);//check here
}
void update(int idx,int val,int beg,int end,int node)
{
    if(beg>=idx and end<=idx)
    {
        Tree[node]=val;//check
        return;
    }
    if(idx>end or idx<beg)
    {
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    update(idx,val,beg,mid,left);
    update(idx,val,mid+1,end,right);
    Tree[node]=gcd(Tree[left],Tree[right]);//check here
}
void query(int i,int j,int val,int node,int beg,int end,int &cnt)
{
    if(i>end or j<beg)
    {
        return;
    }  
    int mid=(beg+end)/2;  
    int left=node*2;
    int right=left+1;
    if(i<=beg and j>=end)
    {
        if(beg==end)
        {
            if(Tree[node]%val)cnt++;
            return;
        }
        if(Tree[node]%val==0)return;
        if((Tree[left]%val) and Tree[right]%val)
        {
            cnt+=2;
            return;
        }
        if(Tree[left]%val)query(i,j,val,left,beg,mid,cnt);
        if(Tree[right]%val)query(i,j,val,right,mid+1,end,cnt);
        return;
    }
    if(cnt<=1)
    {
        query(i,j,val,left,beg,mid,cnt);
    }
    if(cnt<=1)
    {
        query(i,j,val,right,mid+1,end,cnt);
    }
}
void solve()
{
    int n; cin>>n;
    vi v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        update(i,v[i],1,n,1);
    }
    //build(v,1,1,n);
    int q; cin>>q;
    w(q)
    {
        int type; cin>>type;
        if(type==1)
        {
            int cnt=0;
            int i,j,val; cin>>i>>j>>val;
            query(i,j,val,1,1,n,cnt);
            if(cnt<=1)
            {
                cout<<"YES"<<nl;
            }
            else
            {
                cout<<"NO"<<nl;
            }
        }
        else
        {
            int i,val; cin>>i>>val;
            update(i,val,1,n,1);
        }
    }
}
int main()
{
    Ahsanul;
    //test
    solve();
}