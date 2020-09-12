#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid+1, k = low;
    int arrb[100];

    while (i<=mid && j<=high)
    {
        if (arr[i] < arr[j])
        {
            arrb[k++] = arr[i++];
        }
        else
        {
            arrb[k++] = arr[j++];
        }
    }

    for ( ; i <= mid; i++)
        arrb[k++] = arr[i];

    for ( ; j <= high; j++)
        arrb[k++] = arr[j];

    for ( i= low; i<=high; i++)
        arr[i] = arrb[i];
}

void mergeSort(int arr[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high)/2;
        mergeSort(arr,low, mid);
        mergeSort(arr, mid+1, high);
        Merge(arr, low, mid, high);
    }
}

int main(){

    int n;  
    cout<<"Enter size: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter an array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    cout<<"Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}