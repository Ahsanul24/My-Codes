// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n,m,x,y,d; cin>>n>>m>>x>>y>>d;
    if((abs(n-x)+abs(m-y)<=d))
    {
        cout<<-1<<endl;
        return;
    }
    bool check1=true,check2=true,check3=true,check4=true;
    for(int i=2;i<=n;i++)
    {
        int tem=abs(i-x)+abs(1-y);
        if(tem<=d)
        {
            check1=false;
            break;
        }
    }
    for(int i=2;i<=m;i++)
    {
        int tem=abs(n-x)+abs(i-y);
        if(tem<=d)
        {
            check2=false;
            break;
        }
    }
    for(int i=2;i<=m;i++)
    {
        int tem=abs(1-x)+abs(i-y);
        if(tem<=d)
        {
            check3=false;
            break;
        }
    }
    for(int i=2;i<=n;i++)
    {
        int tem=abs(i-x)+abs(m-y);
        if(tem<=d)
        {
            check4=false;
            break;
        }
    }
    if((check1 and check2) or (check3 and check4))
    {
        cout << (n - 1) + (m - 1) << endl;
        return;
    }
    cout<<-1<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}