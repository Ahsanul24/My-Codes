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
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define Ahsanul	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void solve()
{
    char s[100][100];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>s[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(s[i][j]=='X')
            {
                int temp=min({i,j,9-i,9-j});
                if(temp==0)sum+=1;
                else if(temp==1)sum+=2;
                else if(temp==2)sum+=3;
                else if(temp==3)sum+=4;
                else sum+=5;
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    Ahsanul;
    int test; cin>>test;
    w(test)
    {
        solve();
    }
}