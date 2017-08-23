/*
Given a string, compute recursively a new string where all the lowercase 'x' chars have been moved to the end of the string.

endX("xxre") → "rexx"
endX("xxhixx") → "hixxxx"
endX("xhixhix") → "hihixxx"

*/
#include <iostream>

using namespace std;

string endX(string str, int index){

    string result;

    if(index == str.length()-1 || str.length() == 1){
        result += str[index];
        return result;
    }

    if(index > str.length())
        return result;

    if(str[index] != 'x'){
        result += str[index];
        return (result + endX(str, index + 1));
    }
    else{
        return (endX(str, index + 1) + "x");
    }
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "New string where lowercase 'x' chars in " << str << " are moved to end is " << endX(str, 0) << endl;

}
