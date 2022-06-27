#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i <=n; i++)
    {
        int x = arr[i];
        int j = i-1;

        while(j>=1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    
}
void show(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=0; i<n; i++) cin>>arr[i];

    insertionSort(arr,n);

    show(arr,n);
    

}