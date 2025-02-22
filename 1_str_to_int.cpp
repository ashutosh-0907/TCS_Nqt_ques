//1. ++++++ using for loop  +++++++++++

/*#include <iostream>
#include<string>
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


/*#include <iostream>
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
}*/

// 3. Using stoi string to int and atoi argument to int only after c++11
/*#include<stdlib.h>
int main(){
    char* str  = "1246";
    int res;
    res = atoi(str);
    cout<<res;
    return 0;
}*/

// string to decimal


#include <iostream>
#include<string>
using namespace std;

int main() {

    string s = "546.09";
    float res = 0.0;
    float decimal = 0.1;
    bool isdecimal = false;
    for(int i = 0; i < s.length(); i++){

        if(s[i] == '.'){

            isdecimal = true;
        }
        else if(s[i] >= '0' && s[i] <= '9'){

            if(!isdecimal){

               res = res * 10 + (s[i] - '0');

            }
            else{
                res = res  + (s[i] - '0') * decimal;
                decimal /= 10;
            }
        }
    }
    cout << res;
    return 0;

}