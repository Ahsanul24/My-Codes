// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int N = 2 * 1e5 + 10;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int,int>v;
    vi vv;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v[x]++;
    }
    for(auto it:v)
    {
        if(it.s>=k)
        {
            vv.pb(it.f);
        }
    }
    if (vv.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    srt(vv);
    //for(auto it:vv)cout<<it<<" ";cout<<endl;
    int len=1,mlen=0;
    for(int i=0;i<vv.size()-1;i++)
    {
        if(vv[i]+1==vv[i+1])
        {
            len++;
            mlen = max(len, mlen);
        }
        else
        {
            len=1;
        }
    }
    if(vv.size()==mlen)
    {
        cout<<vv[0]<<" "<<vv[vv.size()-1]<<endl;
        return;
    }
    if(mlen==0)
    {
        cout<<vv[0]<<" "<<vv[0]<<endl;
        return;
    }
    int cnt=1;
    int l=0,r=0;
    for(int i=0;i<vv.size()-1;i++)
    {
        if(vv[i]+1==vv[i+1])
        {
            cnt++;
            if(cnt==mlen)
            {
                l=vv[(i+2)-cnt];
                r=vv[i+1];
                cout<<l<<" "<<r<<endl;
                return;
            }
        }
        else
        {
            cnt=1;
        }
    }
}
int main()
{
    Ahsanul;
    test
    solve();
}