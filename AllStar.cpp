/*
Given a string, compute recursively a new string where all the adjacent chars are now separated by a "*".

allStar("hello") → "h*e*l*l*o"
allStar("abc") → "a*b*c"
allStar("ab") → "a*b"

*/
#include <iostream>

using namespace std;

string allStar(string str, int index){

    string result;

    if(index == str.length()-1){
        result += str[index];
        return result;
    }

    if(index > str.length())
        return result;

    result += str[index];
    result += "*";

    return (result + allStar(str, index + 1));
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "New string where all the adjacent chars are now separated by a \"*\" in " << str << " is " << allStar(str, 0) << endl;

}
