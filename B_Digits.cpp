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
const ll  MOD = LLONG_MAX;
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
ll power(ll a,ll b){ll res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
ll bana(ll num,ll d,ll j)
{
    return num+(d*power(10,(j-1)));
}
void solve()
{
    int n,d; cin>>n>>d;
    int k=2;
    ll num=d;
    while(num%3!=0 and k<=3)
    {
        num=bana(num,d,k);
        k++;
    }
    cout<<"1 ";
    k--;
    //cout<<num<<" ";
    if(n>=k)
    {
        cout<<"3 ";
    }
    else
    {
        ll tem=1;
        for(int i=2;i<k;i++)
        {
            tem*=i;
        }
        if(tem%3==0)
        {
            cout<<"3 ";
        }
    }
    k=2;
    num=d;
    while (num % 5 != 0 and k<=5)
    {
        num = bana(num, d, k);
        k++;
    }
    k--;
    //cout<<num<<" ";
    if(n>=k)
    {
        cout<<"5 ";
    }
    else
    {
        ll tem = 1;
        for (ll i = 2; i < k ; i++)
        {
            tem *= i;
        }
        if (tem % 5 == 0)
        {
            cout << "5 ";
        }
    }
    k=2;
    num=d;
    while (num % 7 != 0 and k<=7)
    {
        num = bana(num, d, k);
        k++;
    }
    k--;
    //cout<<num<<" ";
    if(n>=k)
    {
        cout<<"7 ";
    }
    else
    {
        ll tem = 1;
        for (ll i = 2; i < k; i++)
        {
            tem *= i;
        }
        if (tem % 7 == 0)
        {
            cout << "7 ";
        }
    }
    k=2;
    num=d;
    while (num % 9 != 0 and k<=9)
    {
        num = bana(num, d, k);
        k++;
    }
    k--;
    //cout<<num<<" ";
    if(n>=k)
    {
        cout<<"9 ";
    }
    else
    {
        ll tem = 1;
        for (int i = 2; i < k; i++)
        {
            tem *= i;
        }
        if (tem % 9 == 0)
        {
            cout << "9 ";
        }
    }
    cout<<nl;
}
int main()
{
    Ahsanul;
    test
    solve();
}