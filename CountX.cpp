/*
Given a string, compute recursively (no loops) the number of lowercase 'x' chars in the string.

countX("xxhixx") → 4
countX("xhixhix") → 3
countX("hi") → 0

*/
#include <iostream>

using namespace std;

int countX(const string& str){

    if(str.empty())
        return 0;

    return (str.front() == 'x'?  1: 0) + countX(str.substr(1));

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "Number of lowercase 'x' in string " << str << " is " << countX(str) << endl;

}
