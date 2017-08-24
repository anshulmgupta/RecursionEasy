/*
Given a string, compute recursively the number of times lowercase "hi" appears in the string, however do not count "hi" that have an 'x' immedately before them.

countHi2("ahixhi") → 1
countHi2("ahibhi") → 2
countHi2("xhixhi") → 0

*/
#include <iostream>

using namespace std;

int countHi2(string str){

    if(str.empty() || str.length() < 2)
        return 0;

    if(str[0] == 'x')
        return countHi2(str.substr(3));
    else{
        if(str.substr(0,2) == "hi")
            return 1 + countHi2(str.substr(2));
        else
            return countHi2(str.substr(1));
    }
}


int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "No. of times \"hi\" appear in " << str << " is " << countHi2(str) << endl;

    return 0;
}
