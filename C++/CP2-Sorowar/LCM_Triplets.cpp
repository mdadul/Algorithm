// LCM TRIPLETS
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
vector<long long> trial_division1(long long n)
{
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans = trial_division1(n);
    if (ans.size() == 3)
    {
        set<ll> s;
        for (auto i : ans)
            s.insert(i);
        if (s.size() == 3)
        {
            for (auto i : s)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
        return;
    }
    cout << -1 << endl;
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
