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
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
int dp_sona[1000 + 2][1000 + 2];
char a[1000 + 2][1000 + 2];

int call(int i,int j)
{
    if(i==0 and j==0)
    {
        if(a[i][j]!='*')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(a[i][j]=='*')
    {
        return 0;
    }

    if(i<0 or j<0)
    {
        return 0;
    }
    if (dp_sona[i][j] != -1)
        return dp_sona[i][j]%MOD;

    return dp_sona[i][j]= (call(i-1,j)+call(i,j-1))%MOD;
}
void solve()
{
    int n; cin>>n;
    memset(dp_sona,-1,sizeof(dp_sona));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<call(n-1,n-1)<<endl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}