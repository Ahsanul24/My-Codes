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
#define en endl;
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
const int N=1e5+10;
vector<vector<char>>a(3,vector<char>(N));
int koto1(int i,int j)
{
    int cnt = 0;
    if (a[i][j] == 'A')
        cnt++;
    if (a[i + 1][j] == 'A')
        cnt++;
    if (a[i + 1][j + 1] == 'A')
        cnt++;
    return (cnt >= 2);
}
int koto2(int i,int j)
{
    int cnt = 0;
    if (a[i][j] == 'A')
        cnt++;
    if (a[i][j+1] == 'A')
        cnt++;
    if (a[i + 1][j + 1] == 'A')
        cnt++;
    return (cnt >= 2);
}
int koto3(int i,int j)
{
    int cnt = 0;
    if (a[i][j] == 'A')
        cnt++;
    if (a[i + 1][j] == 'A')
        cnt++;
    if (a[i][j + 1] == 'A')
        cnt++;
    return (cnt >= 2);
}
int koto4(int i,int j)
{
    int cnt = 0;
    if (a[i][j] == 'A')
        cnt++;
    if (a[i+1][j] == 'A')
        cnt++;
    if (a[i + 1][j - 1] == 'A')
        cnt++;
    return (cnt>=2);
}
int koto5(int i,int j)
{
    int cnt = 0;
    if (a[i][j] == 'A')
        cnt++;
    if (a[i][j+1] == 'A')
        cnt++;
    if (a[i][j + 2] == 'A')
        cnt++;
    return (cnt >= 2);
}
int koto6(int i,int j)
{
    int cnt = 0;
    if (a[i+1][j] == 'A')
        cnt++;
    if (a[i+1][j + 1] == 'A')
        cnt++;
    if (a[i+1][j + 2] == 'A')
        cnt++;
    return (cnt >= 2);
}
void solve()
{
    for(int i=1;i<=2;i++)
    {
        a[i].clear();
    }
    int n;

    cin>>n;
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    ll cnt=0;
    for(int i=1;i<=n;)
    {
        int p=0,q=0,r=0;
        if(i+1<=n)
            p = koto1(1, i) + koto2(1, i + 1);
        if(i+2<=n)
            q = koto3(1, i) + koto4(1, i + 2);
        r=koto5(1,i)+koto6(1,i);
        //cout<<p<<" "<<q<<endl;
        cnt+=max({p,q,r});
        if(max({p,q,r})==p or max({p,q,r})==q)
        {
            i+=3;
        }
        else
        {
            i++;
        }
    }
    cout<<cnt<<en;
}
int main()
{
    Ahsanul;
    test
    solve();
}