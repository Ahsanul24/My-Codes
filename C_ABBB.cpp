// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    string s; cin>>s;
    vector<char>st;
    st.pb(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if(st.size())
        {
            if(st[st.size()-1]=='A' && s[i]=='B')
            {
                st.pop_back();
            }
            else if (st[st.size() - 1] == 'B' && s[i] == 'B')
            {
                st.pop_back();
            }
            else
            {
                st.pb(s[i]);
            }
        }
        else
        {
            st.pb(s[i]);
        }
    }
    cout<<st.size()<<endl;
}
int main()
{
    Ahsanul;
    int t; cin>>t;
    w(t)
    solve();
}