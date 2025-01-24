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
void solve()
{
    string a,b; cin>>a>>b;
    int suru_h=((a[0]-'0')*10)+(a[1]-'0'),suru_m=((a[3]-'0')*10)+(a[4]-'0');
    int ses_h=((b[0]-'0')*10)+(b[1]-'0'),ses_m=((b[3]-'0')*10)+(b[4]-'0');
    int mot=((ses_h-suru_h)*60);
    if(ses_h>suru_h)
    {
        mot+=(60-suru_m);
        mot+=ses_m;
        mot-=60;
    }
    else
    {
        mot+=(ses_m-suru_m);
    }
    mot/=2;
    int res_h=mot/60,res_m=mot%60;
    //cout<<mot<<nl;
    //cout<<res_h<<" "<<res_m<<nl;
    suru_h+=res_h;
    suru_m+=res_m;
    if(suru_m>=60)
    {
        int tem=suru_m;
        suru_m=(suru_m%60);
        suru_h+=(tem/60);
    }
    string Res_h=to_string(suru_h),Res_m=to_string(suru_m);
    if((int)Res_h.size()<2)Res_h="0"+Res_h;
    if((int)Res_m.size()<2)Res_m="0"+Res_m;
    cout<<Res_h<<":"<<Res_m<<nl;
}
int main()
{
    Ahsanul;
 //   test
    solve();
}