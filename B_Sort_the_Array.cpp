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
    int n; cin>>n;
    vi tem(n);
    loop cin>>tem[i];
    vi v=tem;
    srt(tem);
    if(tem==v)
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return;
    }
    int l=-1,r=-1,item=-1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1] and l==-1)
        {
            l=i+1;
            item=v[i];
        }
        if(v[i]<v[i+1] and l!=-1)
        {
            if(item>v[i+1])
            {
                cout<<"no"<<endl;
                return;
            }
            else
            {
                r=i+1;
                break;
            }
        }
    }
    if(r==-1)r=n;
    for (int i = r - 1; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            cout << "no" << endl;
            return;
        }
    }
    if(l>1 and r==n)
    {
        if(v[r-1]<v[l-2])
        {
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    cout<<l<<" "<<r<<endl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}