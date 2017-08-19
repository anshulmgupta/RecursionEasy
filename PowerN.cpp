/*
Given base and n that are both 1 or more, compute recursively (no loops) the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

powerN(3, 1) → 3
powerN(3, 2) → 9
powerN(3, 3) → 27

*/
#include<iostream>

using namespace std;

int powerN(int base, int pow){

    if(pow == 0)
        return 1;

    int half = powerN(base, pow/2);

    if(pow%2==0)
        return half*half;
    else
        return base*half*half;

}

int main(){

    cout << "Enter The Base : ";
    int base;
    cin >> base;
    cout << "Enter The Power : ";
    int pow;
    cin >> pow;
    std::cout << "POW(" << base <<" , " << pow << ")" << " is : " << powerN(base,pow) << endl;
    return 0;

}
