#include <bits/stdc++.h>
using namespace std;

int queen[20];
int column[20], diagonal1[40],diagonal2[40];

void nqueen(int at, int n)
{
    if(at== n+1)
    {
        cout<<"(row,column) = ";
        for(int i=1; i<=n; i++)
        {
            cout<<i<<" "<<queen[i];
        }
        cout<<endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if(column[i] || diagonal1[i+at] || digonal2[n+1-at])  continue;

        queen[at]= i;

        column[i] = diagonal1[i+at] = diagonal2[n+1-at] = 1;

        nqueen(at+1,n);
        column[i] = diagonal1[i+at] = diagonal2[n+i-at] = 0;  
    }
    
}
int main(){

    nqueen(1,8) // 8 queen problem

}