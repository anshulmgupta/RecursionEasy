/*
Given a string, compute recursively a new string where all the 'x' chars have been removed.

noX("xaxb") → "ab"
noX("abc") → "abc"
noX("xx") → ""

*/
#include <iostream>
#include <string>

using namespace std;

string noX(string str){

    string result;

    if(str.empty())
        result;
   
    if(str[0] != 'x')
        result += str[0];

    if(str.length() >= 1)
        return result + noX(str.substr(1));
    else
        return result;
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "New string by removing 'x' in " << str << " is " << noX(str) << endl;

}
