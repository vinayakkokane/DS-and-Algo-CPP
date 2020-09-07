#include <bits/stdc++.h>
using namespace std;

void bubleSort(int arr[], int n)
{
    int flag=0;                     // improving for best case condn when provided array is sorted
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
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
    bubleSort(arr,n);
    cout<<"Sorted array is :\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
    
    
