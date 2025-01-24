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
    string s; cin>>s;
    string res="";
    int hn=0,hs=0,he=0,hw=0,rn=0,rs=0,re=0,rw=0;
    int hx = 0, hy = 0, rx = 0, ry = 0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='N')
        {
            if(hn==rn)
            {
                res+='H';
                hn++;
                hx++;
            }
            else if(hn>rn)
            {
                res+='R';
                rn++;
                rx++;
            }
            else
            {
                res+='H';
                hn++;
                hx++;
            }
        }
        if(s[i]=='E')
        {
            if(he==re)
            {
                res+='H';
                he++;
                hy++;
            }
            else if(he>re)
            {
                res+='R';
                re++;
                ry++;
            }
            else
            {
                res+='H';
                he++;
                hy++;
            }
        }
        if(s[i]=='W')
        {
            if(hw==rw)
            {
                res+='H';
                hw++;
                hy--;
            }
            else if(hw>rw)
            {
                res+='R';
                rw++;
                ry--;
            }
            else
            {
                res+='H';
                hw++;
                hy--;
            }
        }
        if(s[i]=='S')
        {
            if(hs==rs)
            {
                res+='H';
                hs++;
                hx--;
            }
            else if(hs>rs)
            {
                res+='R';
                rs++;
                rx--;
            }
            else
            {
                res+='H';
                hs++;
                hx--;
            }
        }
    }
    if(hn+rn==1 and hs+rs==1 and he+re==1 and hw+rw==1)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='N' or s[i]=='S')cout<<"H";
            else cout<<"R";
        }
        cout<<endl;
        return;
    }
    string tem=res;
    srt(tem);
    if(tem[0]==tem[n-1] or hx!=rx or hy!=ry)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<res<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}