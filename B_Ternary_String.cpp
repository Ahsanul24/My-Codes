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
    string s; cin>>s;
    int n=(int)s.size();
    string res="";
    res+=s[0];
    int one=-1,two=-1,three=-1;
    int ans=n+2;
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')one=max(one,i);
        if(s[i]=='2')two=max(two,i);
        if(s[i]=='3')three=max(three,i);
        if(one!=-1 and two!=-1 and three!=-1)
        {
            ans=min(ans,max({(abs(one-two))+1,(abs(two-three))+1,(abs(one-three))+1}));
            check=true;
        }
    }
    if(!check)
    {
        cout<<0<<endl;
        return;
    }
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}