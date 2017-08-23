/*
Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

pairStar("hello") → "hel*lo"
pairStar("xxyy") → "x*xy*y"
pairStar("aaaa") → "a*a*a*a"

*/
#include <iostream>

using namespace std;

string pairStar(string str, int index){

    string result;

    if(index == str.length()-1 || str.length() == 1){
        result += str[index];
        return result;
    }

    if(index > str.length())
        return result;

    result += str[index];

    if(str[index] == str[index+1])
        result += "*";

    return (result + pairStar(str, index + 1));
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "New string where identical chars that are adjacent separated by a \"*\" in " << str << " is " << pairStar(str, 0) << endl;

}
