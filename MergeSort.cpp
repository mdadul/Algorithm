#include <bits/stdc++.h>
using namespace std;
int arr[1000000],temp[1000000];
int n;

void mergeSort(int low, int high)
{
    if(low == high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(low,mid);
    mergeSort(mid+1,high);

    int i,j,k;
    for(i=low,j=mid+1,k=low; k<=high; k++)
    {
        if(i==mid+1) temp[k]=arr[j++];
        else if(j==high+1) temp[k]= arr[i++];
        else if(arr[i]<arr[j]) temp[k]=arr[i++];
        else temp[k] = arr[j++];
    }
    for(k = low; k<=n; k++) arr[i]=temp[k];

}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 10];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    

    show(0,n);
}