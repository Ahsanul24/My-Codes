// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>vinno;
    vinno.pb(1);
    int pe=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]!=pe)
        {
            vinno.pb(i+1);
            pe=v[i];
        }
    }
    // for(auto it:vinno)cout<<it<<" ";cout<<endl;
    int q; cin>>q;
    w(q)
    {
        int l,r; cin>>l>>r;
        int k=upper_bound(vinno.begin(),vinno.end(),l)-vinno.begin();
        int kk=upper_bound(vinno.begin(),vinno.end(),r)-vinno.begin();
        if(k==kk)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            //k++;
            if(vinno[k]<=r)
            {
                cout<<l<<" "<<vinno[k]<<endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
        }
    }
    cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}