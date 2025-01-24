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
const int N=1e5+20;
vector<set<int>>Tree(4*N);
void build(vector<int> v,int node,int beg,int end)
{
    if(beg==end)
    {
        Tree[node].insert(v[beg]);
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beg+end)/2;
    build(v,left,beg,mid);
    build(v,right,mid+1,end);
    Tree[node].insert(Tree[left].begin(),Tree[left].end());//check here
    Tree[node].insert(Tree[right].begin(),Tree[right].end());
}
void query(int node,int i,int j,int beg,int end,vi &ans)
{
    if(i>end or j<beg)
    {
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + end) / 2;
    if(i<=beg and j>=end)
    {
        ans.insert(ans.end(),Tree[node].begin(),Tree[node].end());
        return;
    }
    query(left,i,j,beg,mid,ans);
    query(right,i,j,mid+1,end,ans);
    ans.insert(ans.end(),Tree[left].begin(),Tree[left].end());
    ans.insert(ans.end(),Tree[right].begin(),Tree[right].end());
}
void update(int idx,int val,int beg,int end,ll node)
{
    if(beg==end)
    {
        Tree[node].clear();
        Tree[node].insert(val);//check
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
    Tree[node].clear();
    Tree[node].insert(Tree[left].begin(),Tree[left].end());//check here
    Tree[node].insert(Tree[right].begin(),Tree[right].end());
}

void solve()
{
    int n,q; cin>>n>>q;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        if(x%3==0)
        {
            update(i, x, 1, n, 1);
        }

    }
    //build(v,1,1,n);
    // for(int i=1;i<10;i++)
    // {
    //     for(auto it:Tree[i])
    //     {
    //         cout<<it<<" ";
    //     }
    //     cout<<nl;
    // }
    // cout<<nl;
    w(q)
    {
        int x; cin>>x;
        if(x==1)
        {
            int i,j; cin>>i>>j;
            vi ans;
            query(1,i,j,1,n,ans);
            //for(auto it:ans)cout<<it<<" ";cout<<nl;
            ll sum=accumulate(ans.begin(),ans.end(),0LL);
            cout<<sum<<nl;
        }
        else
        {
            int a,y; cin>>a>>y;
            if(y%3==0)
            {
                update(a,y,1,n,1);
            }
            else
            {
                update(a,0,1,n,1);
            }
        }
    }
    // for(int i=1;i<10;i++)
    // {
    //     for(auto it:Tree[i])
    //     {
    //         cout<<it<<" ";
    //     }
    //     cout<<nl;
    // }
    // cout<<nl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}