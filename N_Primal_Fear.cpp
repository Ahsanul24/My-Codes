// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
#include<stdlib.h>
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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
const int N=1e6+10;
vector<bool>prime(N,true);
vi ans(N,0);
void solve()
{
    int n; cin>>n;
    cout<<ans[n]<<endl;
}
int main()
{
    Ahsanul;
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=1;i<=N;i++)
    {
        bool check=true;
        if(prime[i])
        {
           string tem=to_string(i);
           while((int)tem.size()>1)
           {
                tem.erase(tem.begin());
                ll dem =stoi(tem);
                if(!prime[dem])
                {
                    check=false;
                    break;
                }
           }
           if(!prime[stoi(tem)])
           {
                check=false;
           }
        }
        else
        {
            check=false;
        }
        if(check)
        {
            ans[i]++;
        }
    }
    for(int i=1;i<=N;i++)
    {
        ans[i]+=ans[i-1];
    }
    test
    solve();
}