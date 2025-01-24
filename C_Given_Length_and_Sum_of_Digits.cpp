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
void solve()
{
    int n, k; cin>>n>>k;
    if(k==0 and n==1)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }
    int kk=k;
    vi v,vv;
    int i=9,j=1;
    while(k>0)
    {
        if(k-i>=0)
        {
            v.pb(i);
            k-=i;
        }
        else
        {
            i--;
        }
    }
    while(kk>0)
    {
        if(kk-i>=0)
        {
            v.pb(i);
            kk-=i;
        }
        else
        {
            i++;
        }
    }
     //for(auto it:v)cout<<it<<" ";cout<<endl;
    if((v.size()==0 and vv.size()==0) or v.size()>n)
    {
        cout<<-1<<" "<<-1<<endl;
        return;
    }

    rsrt(v);
    srt(vv);
    cout<<vv[0];
    for(int i=1;i<=n-v.size();i++)
    {
        cout<<0;
    }
    for(int i=1;i<v.size();i++)
    {
        cout<<vv[i];
    }
    cout<<" ";
    rsrt(v);
    for(auto it:v)cout<<it;
    for (int i = 1; i <= n-v.size(); i++)
    {
        cout << 0;
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}