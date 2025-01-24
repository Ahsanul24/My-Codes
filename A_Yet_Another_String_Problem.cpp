// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))

int main()
{
    Ahsanul;
    int t; cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<pair<int,char>>cng(n,{-1,'z'});
        while(q--)
        {
            int j;
            char c;
            cin >> j >> c;
            j--;
            cng[j].second=min(cng[j].second,c);
        }
        for(auto it:cng)
        {
            if(it.first>=0)
                //s[it.first]=it.second;
                cout<<it.first<<" "<<it.second<<endl;
        }
        //cout<<s<<'\n';
    }
}