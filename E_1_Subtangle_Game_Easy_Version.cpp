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
    int l,n,m; cin>>l>>n>>m;
    vi v(l+1);
    for(int i=1;i<=l;i++)cin>>v[i];
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    char ans='T';
    int row = 0, col = 0;

    for(int i=1;i<=l;i++)
    {
        int num=v[i];
        //cout<<num<<" ";
        bool paiche=false;
        for(int j=row+1;j<=n;j++)
        {
            for(int k=col+1;k<=m;k++)
            {
                if(a[j][k]==num)
                {
                    //cout<<num<<" ";
                    paiche=true;
                    row=j;
                    col=k;
                    //cout<<row<<" "<<col<<" "<<num<<endl;
                    if(row>=n and col>=m)
                    {
                        cout<<ans<<endl;
                        return;
                    }
                }
                
            }
        }
        if(paiche)
        {
            if(ans=='N')ans='T';
            else ans='N';
        }
        if(!paiche )
        {
            if(ans=='N')
            {
                cout<<"T"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
            return;
        }
    }
    //cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}