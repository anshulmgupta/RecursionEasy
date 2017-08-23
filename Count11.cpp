/*
Given a string, compute recursively (no loops) the number of "11" substrings in the string. The "11" substrings should not overlap.

count11("11abc11") → 2
count11("abc11x11x11") → 3
count11("111") → 1

*/
#include <iostream>

using namespace std;

int count11(string str){

    if(str.empty())
        return 0;

    return str.substr(0,2) == "11" ? 1 + count11(str.substr(2)) : count11(str.substr(1));

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "Total Number of \"11\" substrings in " << str << " is " << count11(str) << endl;

}
