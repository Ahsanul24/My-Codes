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
int romanToInt(string s)
{
    int res=0;
    for(int i=s.size()-1;i>0;i--)
    {
        if(s[i]=='V')
        {
            if(s[i-1]=='I')
            {
                res+=4;
                i--;
            }
            else
            {
                res+=5;
            }
        }
        else if(s[i]=='X')
        {
            if (s[i - 1] == 'I')
            {
                res += 9;
                i--;
            }
            else
            {
                res += 10;
            }
        }
        else if(s[i]=='L')
        {
            if (s[i - 1] == 'X')
            {
                res += 40;
                i--;
            }
            else
            {
                res += 50;
            }
        }
        else if(s[i]=='C')
        {
            if (s[i - 1] == 'X')
            {
                res += 90;
                i--;
            }
            else
            {
                res += 100;
            }
        }
        else if(s[i]=='D')
        {
            if (s[i - 1] == 'C')
            {
                res += 400;
                i--;
            }
            else
            {
                res += 500;
            }
        }
        else if(s[i]=='M')
        {
            if (s[i - 1] == 'C')
            {
                res += 900;
                i--;
            }
            else
            {
                res += 1000;
            }
        }
        else
        {
            res+=1;
        }
    }
    if(s[0]=='M')res+=1000;
    else if(s[0]=='V')res+=5;
    else if(s[0]=='L')res+=50;
    else if(s[0]=='D')res+=500;
    else if(s[0]=='C' && (s[1]!='D' && s[1]!='M'))res+=100;
    else if(s[0]=='X' && (s[1]!='L' && s[1]!='C'))res+=10;
    else if(s[0]=='I' && s[1]=='I')res+=1;
    if(s.size()==1 && s[0]=='I')res+=1;
    return res;
}
int main()
{
    string x; cin>>x;
    cout<<romanToInt(x);
}