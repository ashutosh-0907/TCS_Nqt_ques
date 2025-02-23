#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = " hellow world  ";
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!= ' ')
        {
            res+= s[i];
            
        }
    }
    cout << res<<endl;
    return 0;
}