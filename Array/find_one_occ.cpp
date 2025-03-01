// ++++++++ Approach Using xor    ++++++

/*#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    unordered_map<int,int>mpp;
    int arr[n];
    cout << "Enter array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second == 1){
            cout<<it.first<<endl;
        }
    }
    


    return 0;
}*/

// ++++++++ Approach Using xor++++++

#include <iostream>
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
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<ans;
    return 0;
}