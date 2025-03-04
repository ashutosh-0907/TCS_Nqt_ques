#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int arr[n] = {5, 4, 2, 3, 1};

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            swap(arr[j],arr[j+1]);
        }
    }
    for (int j = 0; j < n; j++){
        cout<<arr[j]<<" ";
    }

}