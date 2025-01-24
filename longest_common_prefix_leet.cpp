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
#define bit(a) __builtin_popcount(a)
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
string longestCommonPrefix(vector<string> &strs)
{
    int n=INT_MAX;
    for(auto it:strs)
    {
        n=min(n,(int)it.size());
    }
    string res="";
    bool check=true;
    for(int i=0;i<n;i++)
    {   
        int c=strs[0][i];
        for(int j=0;j<strs.size();j++)
        {
            if(strs[j][i]!=c)
            {
                check=false;
                break;
            }
        }
        if(check)
        {
            res+=c;
        }
        else
        {
            break;
        }
    }
    return res;
}
void solve()
{
    vector<string>v;
    string s;
    while(cin>>s)
    {
        v.pb(s);
    }
    cout<<longestCommonPrefix(v);
}
int main()
{
    Ahsanul;
 //   test
    solve();
}