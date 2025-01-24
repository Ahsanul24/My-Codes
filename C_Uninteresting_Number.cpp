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
int dp_sona[100000];
bool call(int sum,int idx,int sz,string &st)
{
    if(dp_sona[idx]!=-1)
    {
        return dp_sona[idx];
    }
    if(idx==sz)
    {
        if(sum%9==0)
        {
            return true;
        }
        return false;
    }
    if(sum%9==0)
    {
        return true;
    }
    int curr=st[idx]-'0';
    return dp_sona[idx]=call(sum+((curr*curr)-curr),idx+1,sz,st)or call(sum+0,idx+1,sz,st);
}
void solve()
{
    string s; cin>>s;
    memset(dp_sona,-1,sizeof(dp_sona));
    int sum=0;
    int n=(int)s.size();
    vi v(10,0);

    for(int i=0;i<n;i++)
    {
        sum+=(s[i]-'0');
        v[s[i]-'0']++;
    }
    if(sum%9==0)
    {
        cout<<"YES"<<nl;
        return;
    }
    int tot=0;
    int tem=0;
    int baki=9-(sum%9);
    string kocu="";
    for(int i=0;i<n;i++)
    {
        int curr=s[i]-'0';
        if(curr>1 and curr<=3)
        {
            kocu+=s[i];
            int pabo=(curr*curr)-curr;
            tot+=pabo;
        }
    }
    for(int i=0;i<=v[2];i++)
    {
        for(int j=0;j<=v[3];j++)
        {
            if((sum+((i*2)+(j*6)))%9==0)
            {
                cout<<"YES"<<nl;
                return;
            }
        }
    }
    cout<<"NO"<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}