#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>lar)
        {
            lar = arr[i];
        }
    }
    cout<<lar;
    return 0;
}