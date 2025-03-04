// Selection => selection of small one from unsorted to swap 

#include<iostream>
using namespace std;

int main(){ 
    int n = 5;
    int arr[n] = {1,6,5,4,3};
    for(int i=0;i<n-1;i++){
        for(int j = i+1 ; j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}