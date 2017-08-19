/*
Given a non-negative int n, compute recursively (no loops) the count of the occurrences of 8 as a digit, except that an 8 with another 8 immediately to its left counts double, so 8818 yields 4. Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

count8(8) → 1
count8(818) → 2
count8(8818) → 4

*/
#include<iostream>

using namespace std;

int count8(int num){

    if( num <= 0 )
        return 0;

    return ( num%10 == 8 ? (((num/10)%10 == 8)? 2 : 1) : 0 ) + count8(num/10);

}

int main(){

    cout << "Enter The Number : ";
    int number;
    cin >> number;
    std::cout << "Number of occurrences of digit 8 in a number " << number << " is : " << count8(number) << endl;
    return 0;

}
