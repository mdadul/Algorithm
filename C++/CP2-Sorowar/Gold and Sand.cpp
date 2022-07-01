//Gold and Sand
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,sum1,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int c=0;
        stack<char>ss;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='.')
            {
                continue;
            }
            if(s[i]=='<')
            {
                ss.push(s[i]);
            }
            else if(s[i]=='>'&&!ss.empty())
            {
                ss.pop();
                c++;
            }
        }
        cout<<c<<endl;
    }
}

