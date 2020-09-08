#include <bits/stdc++.h>
using namespace std;

void selectionSort( int arr[], int n)
{
    int k,j;
    for(int i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(arr[j] < arr[k])
                k = j;
        }
        swap(arr[k],arr[i]);
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
    selectionSort(arr,n);
    cout<<"Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
    