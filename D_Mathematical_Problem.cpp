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
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    if(n==2)
    {
        cout<<stoi(s)<<endl;
        return;
    }
    vector<vector<int>>pos(n,vi(n,0));
    string tem="";
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                tem+=s[j];
                tem+=s[j+1];
                int num=stoi(tem);
                pos[i][k]= num;
                j++;
                tem="";
            }
            else
            {
                pos[i][k]= (s[j]-'0');
            } 
            k++;  
        }
        k=0;
    }
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1;j++)
    //     {
    //         cout<<pos[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    ll ans=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        ll tem_ans=0;
        for(int j=0;j<n-1;j++)
        {
            if(pos[i][j]==0)
            {
                tem_ans=0;
                break;
                j++;
            }
            else if(pos[i][j]==1 and j==0)
            {
                tem_ans=1;
            }
            else if(pos[i][j]==1)
            {
                tem_ans*=1;
            }
            else if(tem_ans==1)
            {
                tem_ans*=pos[i][j];
            }
            else
            {
                tem_ans+=pos[i][j];
            }
        }
        ans=min(ans,tem_ans);
    }
   cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}