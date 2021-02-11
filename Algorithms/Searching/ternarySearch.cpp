#include <bits/stdc++.h>
using namespace std;

int ternary_search(int arr[], int l, int r, int key){

    int mid1 = l + (r-l)/3;
    int mid2 = r - (r-l)/3;

    if(r >= l){
        if(key == arr[mid1]){
            return mid1;
        }
        if(key == arr[mid2]){
            return mid2;
        }
        if(key < arr[mid1]){
            return ternary_search(arr, l, mid1, key);
        }
        else if(key > arr[mid2]){
            return ternary_search(arr, mid2, r, key);
        }
        else{
            return ternary_search(arr, mid1, mid2, key);
        }
    }
    else{
        return -1;
    }
}

int main() 
{
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target_index, l, r, key;
    cin>>key;

    l = 0;  r = n-1;
    target_index = ternary_search(arr, l, r, key);

    if(target_index == -1){
        cout<< "Key doesn't exist! \n";
    }else{
        cout<<"Key found at "<< target_index << " location!";
    }
    return 0;
}