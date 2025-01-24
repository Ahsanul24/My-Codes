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
#define w(x) while(x--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define Ahsanul()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void s()
{
    int n; cin>>n;
    string s; cin>>s;
    char first=s[0];
    char choto;
    int index;
    bool check=false;
    for(int i=1;i<n;i++)
    {
        if(s[i]<=first)
        {
            choto=s[i];
            first=s[i];
            index=i;
            check=true;
        }
    }
    if(check)
    {
        cout<<choto;
        for(int i=0;i<n;i++)
        {
            if(i!=index)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<s<<endl;
    }

}
int main()
{
    int test; cin>>test; 
    w(test)
    {
        s();
    }
}