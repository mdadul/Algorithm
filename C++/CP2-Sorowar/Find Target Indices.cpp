//Find Target Indices
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+8];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cin>>k;
        if (binary_search(a, a +n, k))
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==k)
                {
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"no data"<<endl;
        }
    }
}
