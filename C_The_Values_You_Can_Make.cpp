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

int dp_sona[510][510];
int call(vi &v,int idx,int val)
{
    if(val==0)return true;
    if(idx>=v.size() or val<0)return false;
    if(dp_sona[idx][val]!=-1)return dp_sona[idx][val];
    return call(v,idx+1,val-v[idx]) or call(v,idx+1,val);
}
void solve()
{
    int n,k; cin>>n>>k;
    memset(dp_sona,-1,sizeof(dp_sona));
    vi v(n);
    loop
    {
        cin>>v[i];
    }
    vi ans;
    srt(v);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+v[i]<=k)
        {
            ans.pb(v[i]);
            sum+=v[i];
            if(sum==k)break;
        }
        else
        {
            sum -= ans.back();
            ans.pop_back();
            if(sum+v[i]<=k)
            {
                ans.pb(v[i]);
                sum+=v[i];
            }
            if(sum==k)break;
        }
    }
    for(auto it:ans)cout<<it<<" ";
    int summ=accumulate(ans.begin(),ans.end(),0LL);
    vi res;
    for(int i=0;i<=summ;i++)
    {
        if(call(ans,0,i))
        {
            res.pb(i);
        }
    }
    srt(res);
    //cout<<res.size()<<endl;
    //for(auto it:res)cout<<it<<" ";cout<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}