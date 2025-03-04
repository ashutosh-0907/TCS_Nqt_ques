#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cout<<"enter d";
    cin>>d;
    d = d % n;
    reverse(arr,arr+d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr+d,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}