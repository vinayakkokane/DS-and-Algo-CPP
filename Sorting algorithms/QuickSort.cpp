#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    do
    {
        do{
            i++;
        } while (arr[i] <= arr[pivot]);

        do{
            j--;
        } while (arr[j] > arr[pivot]);
        
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
    } while (i<j);
    
    swap(arr[low],arr[j]);
    return j;
}
void QuickSort( int arr[] , int low, int high)
{
    if(low<high)
    {
        int j = partition(arr,low, high);
        QuickSort(arr,low,j);
        QuickSort(arr,j+1,high);
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
    QuickSort(arr,0,n-1);
    cout<<"Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
    

    
