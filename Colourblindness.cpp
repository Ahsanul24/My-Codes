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
int main()
{
    int test,n;
    cin>>test;
    w(test)
    {
        string str1,str2;
        cin>>n;
        cin>>str1;
        cin>>str2;
        int flag=0;
        int count=0;
        if(str1==str2) cout<<"YES";

        else
        {
            for(int i=0;i<n;i++){
                if(str1[i]=='R'&&str2[i]=='R'||str1[i]=='G'&&str2[i]=='B'||str1[i]=='B'&&str2[i]=='G'||str1[i]=='B'&&str2[i]=='B'||str1[i]=='G'&&str2[i]=='G'){
                    count++;
                    }
            }
        if(count==n)cout<<"YES";
        else cout<<"NO";
        }
        cout<<endl;
    }
}

