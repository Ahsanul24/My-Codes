// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void wordPattern(string pattern, string s)
{
    vector<string> str;
    bool check=true;
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] != ' ')
            temp += s[i];
        if (s[i] == ' ' || i + 1 == s.size())
        {
            str.push_back(temp);
            temp = "";
        }
    }
    if(str.size()!=pattern.size())
    {
        cout<<"false"<<endl;
        return;
    }
    vector<pair<string,char>>m;
    for(int i=0;i<str.size();i++)
    {
        m.push_back({str[i],pattern[i]});
    }
    for(int i=0;i<m.size()-1;i++)
    {
        for(int j=i+1;j<m.size();j++)
        {
            if((m[i].second==m[j].second && m[i].first!=m[j].first)||(m[i].first==m[j].first && m[i].second!=m[j].second))
            {
                check=false;
                break;
            }
        }
    }
    if(check)
    {
        cout<<"true"<<endl;
    }
    else
    cout<<"false"<<endl;
}
int main()
{
    string a, b;
    cin >> a;
    scanf("\n");
    getline(cin, b);
    wordPattern(a, b);
}