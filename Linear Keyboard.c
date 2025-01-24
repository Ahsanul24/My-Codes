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
    char str1[27],str2[51];
    w(test){
        scanf("%s",&str1);
        scanf("%s",&str2);
        int temp1,temp2,sum=0;
        int l=strlen(str2);
        if(l==1)printf("0\n");
        else{
        for(int i=0;i<strlen(str2);i++){
            for(int j=0;j<strlen(str1);j++){
                    for(int k=0;k<strlen(str1);k++){
                        if(str2[i]==str1[j]){
                            temp1=j;
                        }
                        if(str2[i+1]==str1[k]){
                            temp2=k;
                        }
                    }
            }
            sum+=abs(temp1-temp2);
        }
        cout<<sum<<endl;
    }
    }
}
