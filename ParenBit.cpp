/*
Given a string that contains a single pair of parenthesis, compute recursively a new string made of only of the parenthesis and their contents, so "xyz(abc)123" yields "(abc)".

parenBit("xyz(abc)123") → "(abc)"
parenBit("x(hello)") → "(hello)"
parenBit("(xy)1") → "(xy)"

*/
#include <iostream>

using namespace std;

string parenBit(string str){

    if(str.empty())
        return str;

    if(str[0] != '(')
        return parenBit(str.substr(1));

    if(str[str.length()-1] != ')')
        return parenBit(str.substr(0, str.length()-1));

    return str;

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "String content made of parenthesis in " << str << " is " << parenBit(str) << endl;

    return 0;

}
