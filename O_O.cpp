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
#define print(v) for(auto it:v)cout<<it<<' ';cout<<'\n';
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr>knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};//knight moves
vector<pr>posible{{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};//eight direction moves;
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int q; cin>>q;
    deque<int>v;
    int  key=0;
    w(q)
    {
        string s; cin>>s;
        if(s=="toFront")
        {
            int x; cin>>x;
            if(!key)
                v.push_front(x);
            else
                v.push_back(x);

        }
        if(s=="front")
        {
            if(v.size()>0)
            { 
                if(!key)
                { 
                    cout<<v.front()<<'\n';
                    v.pop_front();
                }
                else
                { 
                    cout<<v.back()<<'\n';
                    v.pop_back();
                }
            }
            else
            {
                cout<<"No job for Ada?"<<'\n';
            }
        }
        if(s=="back")
        {
            if(v.size()>0)
            { 
                if(!key)
                { 
                    cout<<v.back()<<'\n';
                    v.pop_back();
                }
                else
                {
                    cout << v.front() << endl;
                    v.pop_front();
                }
            }
            else
            {
                cout<<"No job for Ada?"<<'\n';
            }
        }
        if(s=="reverse")
        {
            key^=1;
        }
        if(s=="push_back")
        {
            int x; cin>>x;
            if(!key)
                v.push_back(x);
            else
                v.push_front(x);
        }
    }
}
int main()
{
    Ahsanul;
 //   test
    solve();
}