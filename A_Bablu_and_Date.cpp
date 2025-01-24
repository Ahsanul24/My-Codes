// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>order_set;
// find_by_order() - Returns an iterator to the k-th largest element(counting from zero)
// order_of_key() - The number of items in a set that are strictly smaller than our item
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
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
bool cmp(pair<int,pr>a,pair<int,pr>b)
{
    if ((a.f == b.f) and (a.s.f == b.s.f))
    {
        return a.s.s < b.s.s;
    }
    if(a.f==b.f)
    {
        return a.s.f<b.s.f;
    }
    return a.f<b.f;
}
void solve(int x)
{
    int n; cin>>n;
    int d=0,m=0,y=0;
    vector<pair<int,pr>>v;
    for(int i=0;i<n;i++)
    {
        string tem="";
        for(int j=1;j<=10;j++)
        {
            char c; cin>>c;
            if(c=='/')
            {
                if(j==3)
                {
                    d=stoi(tem);
                }
                else
                {
                    m=stoi(tem);
                }
                tem.clear();
                continue;
            }
            tem+=c;
            if(j==10)
            {
                y=stoi(tem);
            }
        }
        v.pb({y,{m,d}});
    }
    sort(v.begin(),v.end(),cmp);
    // for(auto it:v)
    // {
    //     cout<<it.f<<" "<<it.s.f<<" "<<it.s.s<<nl;
    // }
    // cout<<nl;
    cout<<"Case #"<<x+1<<":"<<nl;
    for(auto it:v)
    {
        int ye=it.f,mo=it.s.f,d=it.s.s;
        string year=to_string(ye);
        string month=to_string(mo);
        string date=to_string(d);
        if(date.size()==1)
        {
            date="0"+date;
        }
        if(month.size()==1)
        {
            month="0"+month;
        }
        cout<<date<<"/"<<month<<"/"<<year<<nl;
    }
}
int main()
{
    Ahsanul;
    test
    solve(i);
}