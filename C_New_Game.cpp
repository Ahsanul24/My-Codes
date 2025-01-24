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
void solve()
{
    int n,k; cin>>n>>k;
    vi v(n);
    loop cin>>v[i];
    srt(v);
    int ans=INT_MIN,cnt=0;
    set<int>uni;
    int last=-1;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(last==-1 or (v[i]==last+1) or (v[i]==last))
        {
            int tem=i-j+1;
            last=v[i];
            uni.insert(v[i]);
            if(uni.size()<=k)
                ans=max(ans,tem);
            else
            {
                int num=*uni.begin();
                uni.erase(num);
                while(v[j]==num)
                {
                    j++;
                }
            }
        }
        else
        {
            uni.clear();
            j=i;
            uni.insert(v[i]);
            last=v[i];
        }
        //cout<<uni.size()<<" ";
    }
    //print(v);
    //for(auto it:uni)cout<<it<<" ";
    cout<<ans<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}