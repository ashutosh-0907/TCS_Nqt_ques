#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = " hellow world  ";
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]== 'o')
        {
        s[i]='a'; 
        }
        res+=s[i];    
    }
    cout << res<<endl;
    return 0;
}