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
vector<bool>prime(200,true);
vector<int>muni;
void solve()
{
    int n; cin>>n;
    vector<int>m;
    map<int,vi>v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        m.pb(x);
        v[x].pb(i+1);
    }
    for(int i=0;i<n;i++)
    {
        int num=m[i];
        for(int j=0;j<muni.size();j++)
        {
            int baki=(muni[j]-num);
            if(baki==num)
            {
                if(v[baki].size()>=2)
                {
                    cout<<v[baki][0]<<" "<<v[baki][1]<<endl;
                    return;
                }
            }
            else
            {
                if(v[baki].size()>0)
                {
                    cout<<i+1<<" "<<v[baki][0]<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
}
int main()
{
    Ahsanul;
    prime[0]=prime[1]=false;
    for(int i=2;i<=200;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=200;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=200;i++)
    {
        if(!prime[i])muni.pb(i);
    }
    test
    solve();
}