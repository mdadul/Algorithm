
// Collect ID from Google Classroom
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        char c;
        cin >> c;
        getline(cin, s);
        int k = 0;
        if (c == 'C')
        {
            k = 1;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'C')
            {
                k = 1;
            }
            if (s[i] >= '0' && s[i] <= '9' && k == 1)
            {
                s1.push_back(s[i]);
                if (s1.size() == 6)
                {
                    break;
                }
            }
        }
        if (!s1.empty())
            cout << "C" << s1 << endl;
    }
}
