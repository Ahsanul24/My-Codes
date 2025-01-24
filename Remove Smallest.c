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
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ara[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(ara[i]>ara[j]){
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        int res,flag=0;
        if(n==1){
            cout<<"YES";
        }
        else{
            for(int i=0;i<n-1;i++){
                res=abs(ara[i]-ara[i+1]);
                if(!(res<=1)){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        cout<<endl;
    }
}
