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
ll inversemod(ll base) { return power(base,MOD-2); }
bool comp(int a, int b)
{
    return a > b;
}
void solve()
{
    int n; cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    ll ans=INT_MAX;
    for(int i=1;i<=n-3;i++)
    {
        set<int>tem;
        tem.insert(v[i]);
        tem.insert(v[i+1]);
        tem.insert(v[i+2]);
        if((int)tem.size()>=2)
        {
            vector<int>mun;
            mun.push_back(v[i]);
            mun.push_back(v[i+1]);
            mun.push_back(v[i+2]);
            if(!is_sorted(mun.begin(),mun.end()) and !is_sorted(mun.begin(),mun.end(),comp))
            {
                // for (auto it : mun)
                //     cout << it << " ";
                // cout << nl;
                ll sum=0;
                for(auto it:mun)sum+=it;
                ans=min(ans,sum);
            }
        }
        if(i+3<=n)
        {
            vi tem;
            tem.pb(v[i]);
            tem.pb(v[i+1]);
            tem.pb(v[i+2]);
            tem.pb(v[i+3]);
            if(!is_sorted(tem.begin(),tem.end()) and !is_sorted(tem.begin(),tem.end(),comp))
            {
                ll sum=accumulate(tem.begin(),tem.end(),0LL);
                for(int i=0;i<4;i++)
                {
                    vector<int> time_limit;
                    vector<int>kocu;
                    ll tem_sum=sum;
                    for(int j=0;j<4;j++)
                    {
                        if(j==i)
                        {
                            //cout<<ori[j]<<" ";
                            tem_sum-=tem[j];
                            continue;
                        }
                        //time_limit.push_back(tem[j]);
                        kocu.push_back(tem[j]);
                    }
                    if(!(is_sorted(kocu.begin(),kocu.end())) and !(is_sorted(kocu.begin(),kocu.end(),comp)))
                    {
                        ans=min(ans,tem_sum);
                    }
                }
            }
        }
    }
    if(ans==INT_MAX)ans=-1;
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}