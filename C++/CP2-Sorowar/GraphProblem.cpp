// Graph Problem
#include <bits/stdc++.h>
#include <deque>
using namespace std;
#define faster               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ff first
#define ss second
#define ll long long int
#define File                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define testCase \
    int tc = 1;  \
    cin >> tc;   \
    for (int i = 1; i <= tc; i++)
#define INF 0x7F
#define MIN_INF 0x80
ll lastonebits(int n)
{
    return n & (-n);
}
bool cmp(const pair<int, int> a, const pair<int, int> b)
{
    // return a.first/a.second > b.first/b.second; //sort by ratio
    return (a.first * b.second) > (b.first * a.second);
}
#define yes                \
    cout << "YES" << endl; \
    return;
#define no                \
    cout << "NO" << endl; \
    return;

vector<int> graph[105500];
vector<int> ex[105500];
vector<int> leaf;
int dist[105000];
int vis[100500];
void bfs(int start)
{
    queue<int> qu;
    qu.push(start);
    dist[start] = 0;
    vis[start] = 1;
    while (!qu.empty())
    {
        int node = qu.front();
        qu.pop();
        for (auto i : graph[node])
        {
            if (!vis[i])
            {
                dist[i] = dist[node] + 1;
                vis[i] = 1;
                qu.push(i);
            }
        }
    }
    vector<int> ans;
    for (auto i : leaf)
        ans.push_back(dist[i]);
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}
void solve()
{
    int node;
    cin >> node;
    for (int i = 0; i < node - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        // cout << a << " " << b << endl;
        graph[a].push_back(b);
        graph[b].push_back(a);
        ex[a].push_back(b);
    }
    for (int i = 1; i <= node; i++)
    {
        // cout << ex[i].size() << endl;;
        if (ex[i].size() == 0)
            leaf.push_back(i);
    }
    bfs(1);
    for (int i = 1; i <= node; i++)
    {
        graph[i].clear();
        ex[i].clear();
    }
    leaf.clear();
    memset(dist, 0, sizeof(dist));
    memset(vis, 0, sizeof(vis));
}

int main()
{
    faster;
#ifndef ONLINE_JUDGE
    File
#endif

        testCase
    {

        // cout << "Case " << i << ": ";
        solve();
    }
    // solve();
}
