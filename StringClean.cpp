/*
Given a string, return recursively a "cleaned" string where adjacent chars that are the same have been reduced to a single char. So "yyzzza" yields "yza".

stringClean("yyzzza") → "yza"
stringClean("abbbcdd") → "abcd"
stringClean("Hello") → "Helo"

*/
#include <iostream>

using namespace std;

string stringClean(string str){

    string result;
    if(str.empty())
        return result;

    if(str.length() == 1)
        return str;

    if(str[0] != str[1])
        result += str[0];
  
    return result + stringClean(str.substr(1));

}


int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "Cleaned string is " << stringClean(str) << endl;

    return 0;
}
