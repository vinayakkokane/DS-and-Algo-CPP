#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,ans;
    cout<<"Enter the number: ";
    cin>>N;
    ans=floor(log10(N)+1);
    cout<<"Count of nums: "<<ans<<endl;
    return 0;
}