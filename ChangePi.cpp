/*
Given a string, compute recursively (no loops) a new string where all appearances of "pi" have been replaced by "3.14".

changePi("xpix") → "x3.14x"
changePi("pipi") → "3.143.14"
changePi("pip") → "3.14p"

*/
#include <iostream>
#include <string>

using namespace std;

string changePi(string str){

    string result;

    if(str.empty())
        result;

    if(str.length() <= 1)
        return str;
  
    if(str[0] == 'p' && str[1] == 'i'){
        result += "3.14";
        return result + changePi(str.substr(2));
    }
    else{
        result += str[0];
        return result + changePi(str.substr(1));
    }

}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "New string by changing 'pi' to '3.14' in " << str << " is " << changePi(str) << endl;

}
