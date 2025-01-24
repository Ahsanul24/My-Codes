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
int dp_sona[1005][1005];
int call(string &a,string &b,string &c,int idx,int curr_a,int curr_b)
{
    if((int)a.size()==curr_a and (int)b.size()==curr_b)
    {
        return 0;
    }
    if(dp_sona[curr_a][curr_b]!=-1)
    {
        return dp_sona[curr_a][curr_b];
    }
    int ans=20001;
    int curr=curr_a+curr_b;
    if(curr_a<(int)a.size())
    {
        int d=(a[curr_a]!=c[curr]);
        ans= min(ans,(call(a,b,c,idx+1,curr_a+1,curr_b)+d));
    }
    if(b.size()>curr_b)
    {
        int d=(b[curr_b]!=c[curr]);
        ans= min(ans,(call(a,b,c,idx+1,curr_a,curr_b+1)+d));
    }
    return dp_sona[curr_a][curr_b] = ans;
}
void solve()
{
    string a,b,c; cin>>a>>b>>c;
    memset(dp_sona,-1,sizeof(dp_sona));
    int n=(int)a.size(),m=(int)b.size(),o=(int)c.size();
    int ans=call(a,b,c,0,0,0);
    cout<<ans<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}