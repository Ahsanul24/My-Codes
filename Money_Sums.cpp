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
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
const int N=1e5+10;
int dp_sona[110][N];
bool call(vi &v,int idx,int k)
{
    if(k==0)
    {
        return true;
    }
    if(idx<0 or k<0)
    {
        return false;
    }
    if(dp_sona[idx][k]!=-1)return dp_sona[idx][k];
    return dp_sona[idx][k]= (call(v,idx-1,k) or call(v,idx-1,k-v[idx]));

}
void solve()
{
    int n; cin>>n;
    vi v(n);
    loop cin>>v[i];
    ll sum=accumulate(v.begin(),v.end(),0LL);
    memset(dp_sona,-1,sizeof(dp_sona));
    vi res;
    for(int i=1;i<=sum;i++)
    {
        if(call(v,n-1,i))
        {
            res.pb(i);
        }
    }
    cout<<res.size()<<endl;
    print(res);
}
int main()
{
    Ahsanul;
 //   test
    solve();
}