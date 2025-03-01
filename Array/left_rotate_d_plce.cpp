#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    vector<int>arr(n); // 1 2 3 4 5 7 =>  4 5 7 1 2 3
    
    for(int i=0;i<n;i++){
        arr.push_back(i);
    }
    int d;
    cout<<"rotate by "<<endl;
    cin>>d;
    
}