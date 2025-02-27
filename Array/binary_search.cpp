#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    bool found = false;
    cin >> n;
    int arr[n];
    cout << "Enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<<"enter target"<<endl;
    cin>>target;
    int low = 0, high = n - 1;
  
    while(low<=high){
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
    {
        cout << "element found" << endl;
        found= true;
        break;
    }
    else if (arr[mid] < target)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
}
if(!found)cout<<"not found";
    return 0;
}