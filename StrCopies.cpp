/*
Given a string and a non-empty substring sub, compute recursively if at least n copies of sub appear in the string somewhere, possibly with overlapping. N will be non-negative.

strCopies("catcowcat", "cat", 2) → true
strCopies("catcowcat", "cow", 2) → false
strCopies("catcowcat", "cow", 1) → true

*/
#include <iostream>

using namespace std;

bool strCopies(string str, string substr, int count){

    if(count == 0)
        return true;

    if(str.empty() && count > 0 || substr.length() > str.length())
        return false;

    if(substr.compare(str.substr(0, substr.length())) == 0)
        return strCopies(str.substr(substr.length()), substr, count - 1);
    else
        return strCopies(str.substr(1), substr, count);

}


int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    string substr;
    cout << "Enter Substring : ";
    cin >> substr;
    cout << "Enter Count : ";
    int count;
    cin >> count;

    cout << "Count of Substring " << substr << " in string " << str << " is " << count << " -> " << strCopies(str, substr, count) << endl;

    return 0;

}
