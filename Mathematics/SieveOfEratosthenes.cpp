/*
    Implementation of Sieve of Eratosthenes algorithm to check prime numbers
    Name: Vinayak L Kokane
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;  
    cout<<"Enter the number-size: ";
    cin>>n;
    int prime[n];

    cout<<"Enter the numbers: ";
    for(int i=0;i<=n;i++)
        cin>>prime[i];

    for(int i=2;i<=n;i++)       //initialize all the number as prime numbers
        prime[i]=1;

    prime[0]=0;                 //marking 1,2 as non-prime number
    prime[1]=0;

    for(int i=2;i<=n;i++){      //marking multiples of numbers as 0
        if(prime[i]==1){
            for(int j=2;j*i<=n;j++){
                prime[j*i]=0;
            }
        }
    }
    cout<<"Corresponding Prime numbers are: ";
    for (int i = 0; i <= n; i++)
    {
        cout<<prime[i]<<" ";
    }
    cout<<"\n\n===>Conclusion is : '0' in an array means the corresponding number is non-prime and if it is '1' number is Prime!\n";
}