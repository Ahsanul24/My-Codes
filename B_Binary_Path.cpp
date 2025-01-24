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
void solve()
{
    int n; cin>>n;
    string s,ss; cin>>s>>ss;
    string res=s[0]+ss; 
    bool check=true;
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]<ss[i-1] and check)
        {
            res[i]=s[i];
            cnt=1;
        }
        if(s[i]>ss[i-1])
        {
            check=false;
        }
        if(s[i]==ss[i-1] and check)
        {
            cnt++;
        }
    }
    //if(s[n-1]==ss[n-1])cnt++;
    cout<<res<<endl;
    cout<<cnt<<endl;
    // int cnt=0;
    // string mul="",erase="",tem="";
    // mul+=s[0];
    // if((tem+=mul+ss)==res)cnt=1;
    // tem="";
    // erase+= s[0];
    // string temp=ss;
    // for(int i=1;i<n;i++)
    // {   
    //     reverse(temp.begin(),temp.end());
    //     temp.pop_back();
    //     reverse(temp.begin(),temp.end());
    //     tem="";
    //     erase += s[i];
    //     //cout << erase << " ";
    //     tem+=erase;
    //     tem+=temp;

    //     //cout << tem << " ";
    //     if(tem==res)cnt++;
    //     //tem="";

    // }
    // cout<<cnt<<endl;
}
int main()
{
    Ahsanul;
    test
    solve();
}