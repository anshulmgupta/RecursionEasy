/*
We'll say that a "pair" in a string is two instances of a char separated by a char. So "AxA" the A's make a pair. Pair's can overlap, so "AxAxA" contains 3 pairs -- 2 for A and 1 for x. Recursively compute the number of pairs in the given string.

countPairs("axa") → 1
countPairs("axax") → 2
countPairs("axbx") → 1

*/
#include <iostream>

using namespace std;

int countPairs(string str, int index){

    if(index == str.length()-1 || str.length() <= 2){
        return 0;
    }

    if(index == 0 || str[index-1] != str[index+1])
        return countPairs(str, index+1);
    else
        return 1 + countPairs(str, index+1);
}

int main(){

    cout << "Enter String : ";
    string str;
    cin >> str;
    cout << "Number of pairs in " << str << " is " << countPairs(str, 0) << endl;

}
