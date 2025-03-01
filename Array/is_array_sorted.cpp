#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int arr[n];
    bool isSorted = false;
    cout << "Enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]>arr[i])
        {
            isSorted = true;
        }
        
    }
    if(isSorted)cout<<"Sorted";
    else{
        cout<<"not sprted";
    }
    
    return 0;
}