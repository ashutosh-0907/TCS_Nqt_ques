#include<iostream>
using namespace std;
int main(){

    int n=5;
    int arr[n];
    int sum=0;
    sum=(n*n+n)/2;
    int target=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        target+=arr[i];
    }
    cout<<sum-target<<endl;

    return 0;
} 
