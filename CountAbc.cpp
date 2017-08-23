/*
Count recursively the total number of "abc" and "aba" substrings that appear in the given string.

countAbc("abc") → 1
countAbc("abcxxabc") → 2
countAbc("abaxxaba") → 2

*/
#include <iostream>

using namespace std;

int countAbc(string str){

    if(str.empty())
        return 0;

    return str.substr(0,3) == "abc" || str.substr(0,3) == "aba" ? 1 + countAbc(str.substr(1)) : countAbc(str.substr(1));

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "Total Number of \"abc\" and \"aba\" substrings in " << str << " is " << countAbc(str) << endl;

}
