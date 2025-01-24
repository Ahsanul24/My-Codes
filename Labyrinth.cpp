// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
// NSTU//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int  MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define test int t; cin>>t; for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define pi 2*acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
int power(int a,int b){int res=1;while (b){if (b&1){res=(res*1ll*a)%MOD;}a=(a*1ll*a)%MOD;b>>=1;}return res;}
int n, m;
const int N = 1010, M = 1010;
char a[N][M];
bool vis[N][M];
vector<vector<int>>dis(N,vector<int>(M,INT_MAX));
char kothai[N][M];
map<pr,pr>par;
bool check = false;
vector<pr>possible={{0,1},{0,-1},{-1,0},{1,0}};
vector<pr>move(int x,int y)
{
    vector<pr>res;
    for(auto it:possible)
    {
        int xx=x+it.f;
        int yy=y+it.s;
        if(xx>=0 and xx<n and yy>=0 and yy<m)
        {
            res.pb({xx,yy});
        }
    }
    return res;
}
void bfs(int sour_x, int sour_y,int des_x,int des_y)
{
    vis[sour_x][sour_y]=true;
    dis[sour_x][sour_y]=0;
    queue<pr>q;
    q.push({sour_x,sour_y});
    while(!q.empty())
    {
        pr curr=q.front();
        q.pop();
        int new_x=curr.f,new_y=curr.s;
        for(auto child:move(new_x,new_y))
        {
            if(!vis[child.f][child.s] and (a[child.f][child.s]=='.' or a[child.f][child.s]=='B'))
            {
                int dif_x=child.f-curr.f,diff_y=child.s-curr.s;
                if(dif_x==-1)kothai[child.f][child.s]='U';
                if(dif_x==1)kothai[child.f][child.s]='D';
                if(diff_y==1)kothai[child.f][child.s]='R';
                if(diff_y==-1)kothai[child.f][child.s]='L';
                q.push({child.f,child.s});
                vis[child.f][child.s]=true;
                dis[child.f][child.s]=dis[curr.f][curr.s]+1;
                //cout<<child.f<<" "<<child.s<<endl;
                if(a[child.f][child.s]=='B')
                {
                    return;
                }
            }
        }
    }
}
void solve()
{
    cin >> n >> m;
    int sour_x,sour_y,des_x,des_y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
            {
                sour_x = i;
                sour_y = j;
            }
            if(a[i][j]=='B')
            {
                des_x=i;
                des_y=j;
            }
        }
    }
    bfs(sour_x,sour_y,des_x,des_y);
    if(dis[des_x][des_y]==INT_MAX)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(!kothai[i][j])
    //         {
    //             cout<<".";
    //         }
    //         cout<<kothai[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    string poth="";
    int xx=des_x,yy=des_y;
    poth+=kothai[xx][yy];
    while(a[xx][yy]!='A')
    {
        if(kothai[xx][yy]=='U')
        {
            xx+=1;
            // cout << xx << " " << yy << endl;
            poth += kothai[xx][yy];
        }
        if(kothai[xx][yy]=='D')
        {
            xx-=1;
            // cout << xx << " " << yy << endl;
            poth += kothai[xx][yy];
        }
        if(kothai[xx][yy]=='R')
        {
            yy-=1;
            // cout << xx << " " << yy << endl;
            poth += kothai[xx][yy];
        }
        if(kothai[xx][yy]=='L')
        {
            yy+=1;
            // cout << xx << " " << yy << endl;
            poth += kothai[xx][yy];
        }
    }
    reverse(poth.begin(),poth.end());
    poth.erase(poth.begin());
    cout<<poth.size()<<endl;
    cout<<poth<<endl;
}
int main()
{
    Ahsanul;
    //test
    solve();
}