#include <iostream>
using namespace std;
int main()
{

    int n;
    int first = -1;
    int last = -1;
    cout << "enter n" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout<<"enter target"<<endl;
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            if(first==-1){
                first = i;
            }
            last = i;
            
        }
    }
    cout<<first<<endl;
    cout<<last<<endl;
}
