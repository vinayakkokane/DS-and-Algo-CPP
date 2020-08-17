#include<iostream>
using namespace std;

int main(){
    int N,digitCounter=0;
    cout<<"Enter the number: ";
    cin>>N;

    if(N==0)
        return 1;
    
    while(N!=0){
        digitCounter=digitCounter+1;
        N = N / 10;
    }
    cout<<"Count the nums: "<<digitCounter;
    return 0;
}