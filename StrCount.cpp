/*
Given a string and a non-empty substring sub, compute recursively the number of times that sub appears in the string, without the sub strings overlapping.

strCount("catcowcat", "cat") → 2
strCount("catcowcat", "cow") → 1
strCount("catcowcat", "dog") → 0

*/
#include <iostream>

using namespace std;

int strCount(string str, string substr){

    if(str.empty() || substr.length() > str.length())
        return 0;

    if(substr.compare(str.substr(0, substr.length())) == 0)
        return 1 + strCount(str.substr(substr.length()), substr);
    else
        return strCount(str.substr(1), substr);

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    string substr;
    cout << "Enter Substring : ";
    cin >> substr;

    cout << "Count of Substring " << substr << " in string " << str << " is " << strCount(str, substr) << endl;

    return 0;

}
