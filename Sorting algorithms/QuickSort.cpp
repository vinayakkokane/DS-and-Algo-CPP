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

int main()
{
    int arr[]={11,13,7,12,16,9,24,5,10,3},n=11,i;
    int x = arr[0] ; 
    QuickSort(arr,x,n-1);
    for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
    return 0;
}

    