//1. ++++++ using for loop  +++++++++++

/*#include <iostream>
using namespace std;

int main() {
    string str = "123";
    int res = 0; // Initialize to avoid undefined behavior

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            res = res * 10 + (str[i] - '0');
        }
    }

    cout << res; 
    return 0;
}*/

// 2. using streamstring class


#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "123";
    stringstream ss;

    ss<<str;

    int res=0;
    ss>>res;
    cout<<res;

    return 0;
}