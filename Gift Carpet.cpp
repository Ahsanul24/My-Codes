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
    int test;
    cin>>test;
    w(test){
        int n,m;
        cin>>n>>m;
        char str[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             cin>>str[i][j];
            }
        }
        char s[]="vika";
        int j=0;
        for(int i=0;i<m;i++){
            for(int k=0;k<n;k++){
                if(str[k][i]==s[j]){
                    j++;
                    break;
                }
            }
        }
        if(j>=4){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
