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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve(int c)
{
    char a,b; cin>>a>>b;
    int x=(int)a,y=(int)b;
    //cout<<x<<" "<<y<<nl;
    vector<pr>ans;
    for(int i=1;i<=94;i++)
    {
        int col=ceil(94*1.0/i);
        vector<vi>v(i+1,vi (col+1));
        int tem=33;
        for(int j=1;j<=col and tem<=126;j++)
        {
            for(int k=1;k<=i and tem<=126;k++)
            {
                v[k][j]=tem;
                tem++;
            }
        }
        for(int j=1;j<=i;j++)
        {
            bool check_x=false,check_y=false;
            for(int k=1;k<=col;k++)
            {
                //cout<<v[j][k]<<" ";
                if(v[j][k]==x)check_x=true;
                if(v[j][k]==y)check_y=true;
            }
           //cout<<nl;cout<<nl;
            if(check_x and check_y)
            {
                ans.pb({i,col});
                break;
            }
        }
        // if(i==2)break;
    }
    cout<<"Case "<<c<<":"<<nl;
    for(auto it:ans)
    {
        cout<<it.f<<" "<<it.s<<endl;
    }
    cout<<nl;
}
int main()
{
    Ahsanul;
    test
    solve(i+1);
}