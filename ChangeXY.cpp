/*
Given a string, compute recursively (no loops) a new string where all the lowercase 'x' chars have been changed to 'y' chars.

changeXY("codex") → "codey"
changeXY("xxhixx") → "yyhiyy"
changeXY("xhixhix") → "yhiyhiy"

*/
#include <iostream>
#include <string>

using namespace std;

string changeXY(string str){

    string result;

    if(str.empty())
        result;

    if(str[0] == 'x')
        result += 'y';
    else
        result += str[0];

    return result + (str.length() > 0 ? changeXY(str.substr(1)) : string());
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "New string by changing 'x' to 'y' in " << str << " is " << changeXY(str) << endl;

}
