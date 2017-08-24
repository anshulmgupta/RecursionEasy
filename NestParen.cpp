/*
Given a string, return true if it is a nesting of zero or more pairs of parenthesis, like "(())" or "((()))". Suggestion: check the first and last chars, and then recur on what's inside them.

nestParen("(())") → true
nestParen("((()))") → true
nestParen("(((x))") → false

*/
#include <iostream>

using namespace std;

bool nestParen(string str){

    if(str.empty())
        return true;

    if(str[0] == '(' && str[str.length()-1] == ')')
        return nestParen(str.substr(1, str.length()-2));

    return false;

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "String : " << str << " -> " << nestParen(str) << endl;

    return 0;

}
