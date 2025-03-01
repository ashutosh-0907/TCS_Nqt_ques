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
    int lar = arr[0];
    int sec_lar = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>lar)
        {
            lar = arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        if(arr[i]>sec_lar && arr[i]!=lar)
        {
            sec_lar = arr[i];
        }
    }
    cout<<sec_lar;
    return 0;
}