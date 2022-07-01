#include <bits/stdc++.h>
#include <deque>
#define F first
#define S second
#define lld long long int
//#define D double
#define pb push_back
#define vc vector
#define um unordered_map
#define EPS 1e-10
#define MP make_pair
#define pi acos(-1)
#include <stdio.h>
#include <string.h>
#define faster               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
int main()
{

    faster;
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
    //#endif

    lld i, j, k, n, x = 0;
    cin >> n;
    vector<lld> A(n);
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
    {
        if (A[i] == A[i + 1] + 1 || A[i] == A[i + 1] - 1)
        {
            x++;
            for (j = i + 1; j < n; j++)
            {
                if (A[j] == A[j + 1] + 1 || A[j] == A[j + 1] - 1)
                    x++;
                else
                {
                    x++;
                    i = j;
                    break;
                }
            }
            // x++;
            // if(A[i]!=A[i+1]+1 || A[i]!=A[i+1]-1)x++;
        }
    }
    if (x != 0)
        cout << x << endl;
    else
        cout << "OK" << endl;
}