// IN THE NAME OF ALLAH
// Coded by Ahsanul Imam
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> order_set;
// find_by_order() - Returns an iterator to the k-th largest element(counting from zero)
// order_of_key() - The number of items in a set that are strictly smaller than our item
typedef long long int ll;
const int MOD = 1000000007;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define f first
#define s second
#define nl '\n';
#define bit(a) __builtin_popcountll(a)
#define w(x) while (x--)
#define test  \
    int t;    \
    cin >> t; \
    for (int i = 0; i < t; i++)
#define loop for (int i = 0; i < n; i++)
#define print(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << endl;
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd<long long int>(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
vector<pr> knight_posible{{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}}; // knight moves
vector<pr> posible{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};          // eight direction moves;

void solve()
{
    int n, v, k;
    cin >> n >> v >> k;
    map<char, vi> fre;
    string s;
    cin >> s;
    priority_queue<pr, vector<pr>, greater<pr>> pq;
    vi ans(n, INT_MAX);
    ans[v] = 0;
    pq.push({v, 0});
    while (!pq.empty())
    {
        pr curr = pq.top();
        pq.pop();

        int u = curr.first;
        int curr_cost = curr.second;
        if (curr_cost > ans[u])
        {
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (u == i)
            { 
                continue;
            }
            int cost = 0 ;
            if (s[u] == s[i])
            {
                cost = k;
            }
            else
            {
                cost = abs(i - v);
            }
            if (ans[u] + cost < ans[i])
            {
                ans[v] = ans[u] + cost;
                pq.push({v, ans[v]});
            }
        }
    }
    for(auto it:ans)cout<<it<<" ";
}
int main()
{
    Ahsanul;
    //   test
    solve();
}