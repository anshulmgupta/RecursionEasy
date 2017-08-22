/*
Given a string, compute recursively (no loops) the number of times lowercase "hi" appears in the string.

countHi("xxhixx") → 1
countHi("xhixhix") → 2
countHi("hi") → 1

*/
#include <iostream>

using namespace std;

int countHi(const string& str){

    if(str.empty() || str.length() < 2)
        return 0;

    return ((str[0] == 'h' && str[1] == 'i') ? 1  + countHi(str.substr(2)) : 0 + countHi(str.substr(1)));

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "Number of times 'hi' in string " << str << " is " << countHi(str) << endl;

}
