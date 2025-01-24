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
    string s; cin>>s;
    int last0=0,last1=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            last0=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            last1=i;
            break;
        }
    }
    if(last0==0 or last1==0 or s.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    vi one(s.size()+1,0),zero(s.size()+1,0);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            zero[i]++;
        }
        else
        {
            one[i]++;
        }
    }
    for(int i=1;i<=s.size();i++)
    {
        one[i]+=one[i-1];
        zero[i]+=zero[i-1];
    }
    int ans=INT_MAX;
    for(int i=0;i<s.size();i++)
    {
        if(one[i] and zero[i])
        {
            if(s[i]=='0')
            {
                int oneache=one[one.size()-1]-one[i];
                int agerzero=zero[i]-1;
                ans=min(ans,oneache+agerzero);
                int agerone=one[i];
                ans=min(ans,agerone+oneache);
                // cout<<ans<<endl;
            }
            else
            {
                int zeroace=zero[zero.size()-1]-zero[i];
                int agerone=one[i]-1;
                ans=min(ans,zeroace+agerone);
                int agerzero=zero[i];
                ans=min(ans,zeroace+agerzero);
                // cout<<ans<<" "<<zeroace<<" "<<agerone<<endl;;
            }
        }
    }
    cout<<ans<<endl;
    // for(auto it:one)cout<<it<<" ";cout<<endl;
}
int main()
{
    Ahsanul;
    test solve();
}