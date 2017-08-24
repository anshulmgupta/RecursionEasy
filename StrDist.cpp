/*
Given a string and a non-empty substring sub, compute recursively the largest substring which starts and ends with sub and return its length.

strDist("catcowcat", "cat") → 9
strDist("catcowcat", "cow") → 3
strDist("cccatcowcatxx", "cat") → 9

*/
#include <iostream>

using namespace std;

int strDist(string str, string substr){

    if(str.empty() || substr.length() > str.length())
        return 0;

    if(substr.compare(str.substr(0, substr.length())) != 0)
        return strDist(str.substr(1), substr);

    if(substr.compare(str.substr(str.length() - substr.length(), substr.length())) != 0)
        return strDist(str.substr(0, str.length() - 1), substr);
 
    return str.length();
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    string substr;
    cout << "Enter Substring : ";
    cin >> substr;

    cout << "Length of largest substring which starts and end with " << substr << " in string " << str << " is " << strDist(str, substr) << endl;

    return 0;

}
