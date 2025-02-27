#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            cout << "Key is found  at" << i;
            found = true;
            break;
            
        }

    }
    if(!found)cout<<"-1";

    return 0;
}