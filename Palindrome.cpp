#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string str){
    if(str.empty())
        return true;
    if(str[0] == str[str.length()-1] && is_palindrome(str.substr(1, str.length()-2)))
        return true;
    return false;
}

int main(){
    cout << "Enter String To Check For Palindrome : ";
    string str;
    cin >> str;
    cout << "String " << str << " is palindrome = "  << boolalpha << is_palindrome(str) << endl;
    return 0;
}
