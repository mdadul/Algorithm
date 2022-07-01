// Admission Test
#include <bits/stdc++.h>
using namespace std;
struct Admission
{
    char ch;
    int num;
    string s;
};

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        vector<Admission> v(n);
        for (int i = 0; i < n; i++)
        {
            Admission a;
            cin >> a.ch >> a.num >> a.s;
            v[i] = a;
        }
        int sub = 0;
        int t = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].s == "wrong")
            {
                sub += 2;
            }
            else if (v[i].s == "right")
            {
                t++;
                p += v[i].num;
            }
        }
        int ans = p - sub;
        if (ans < 0)
            ans = 0;
        cout << t << " " << ans << endl;
    }
