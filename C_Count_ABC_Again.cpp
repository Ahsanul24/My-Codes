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
    int n,q; cin>>n>>q;
    string s;cin>>s;
    int curr=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='C')
        {
            curr++;
            i+=2;
        }
    }
    w(q)
    {
        int x; char c; cin>>x>>c;
        x--;
        int age=0;
        if(x-2>=0)
        {
            if(s[x-2]=='A' and s[x-1]=='B' and s[x]=='C')age++;
        }
        if(x+2<n)
        {
            if(s[x]=='A' and s[x+1]=='B' and s[x+2]=='C')age++;
        }
        if(x-1>=0 and x+1<n)
        {
            if(s[x-1]=='A' and s[x]=='B' and s[x+1]=='C')age++;
        }
        s[x]=c;
        int pore=0;
        if(x-2>=0)
        {
            if(s[x-2]=='A' and s[x-1]=='B' and s[x]=='C')pore++;
        }
        if(x+2<n)
        {
            if(s[x]=='A' and s[x+1]=='B' and s[x+2]=='C')pore++;
        }
        if(x-1>=0 and x+1<n)
        {
            if(s[x-1]=='A' and s[x]=='B' and s[x+1]=='C')pore++;
        }
        if(age<=pore)
        {
            curr=curr+(pore-age);
        }
        else
        {
            curr=curr-(age-pore);
        }
        cout<<curr<<endl;
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}