
// Average placed in the middle
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, j;
    float sum = 0, sum1 = 0;
    cin >> n;
    int a[n + 5];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    sum1 = floor(sum / floor(n));
    int k = ((n / 2) + 1);
    for (i = 0; i < n; i++)
    {
        if (i == k - 1)
        {

            if (a[i] == sum1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
