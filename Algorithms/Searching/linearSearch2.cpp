#include<iostream>
using namespace std;

int linear_search(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            return i;
    }
     return -1;
}

int main()
{
    int a[20],n,key,i;
    cout<<"Enter the number of elements in an array: \n";
    cin>>n;

    cout<<"\nEnter the elements in an array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nThe elements in an array are:\n";

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nEnter an element that you want to search: \n";
    cin>>key;


    int res=linear_search(a,n,key);
    if(res==-1)
    {
        cout<<"The element is not present in an array\n";
    }
    else
        cout<<"The element is found at index: "<<res;

    return 0;
}
