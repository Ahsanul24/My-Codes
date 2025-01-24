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
#define F first
#define S second
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
void substring(string str, int n)
{
    if(n==2)
    {
        cout<<str<<endl;
        return;
    }
    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            string sub = str.substr(i, j);
            if (sub.length() == 2)
            {
                vec.push_back(sub);
            }
        }
    }
    sort(vec.begin(),vec.end());
    int count = 1, ans = 0;
    string res=" ";
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] == vec[i + 1])
        {
            count++;
            if(count>ans)
            {
                ans=count;
                res=vec[i];
            }
        }
        else
        count = 1;
    }
    if(ans==0)
    {
        cout<<vec[0]<<endl;;
    }
    else
    {
        cout<<res<<endl;
    }
}
int main()
{
    Ahsanul;
    int n; cin>>n;
    string s; cin>>s;
    substring(s,n);
}