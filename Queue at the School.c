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
    int n,t;
    cin>>n>>t;
    char str[n];
    scanf("%s",&str);
    char temp;
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if(str[j]=='B' && str[j+1]=='G'){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                j++;
            }
        }
    }
    cout<<str;
}
