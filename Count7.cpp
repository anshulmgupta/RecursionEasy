/*
Given a non-negative int n, return the count of the occurrences of 7 as a digit, so for example 717 yields 2. (no loops). Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

count7(717) → 2
count7(7) → 1
count7(123) → 0

*/
#include<iostream>

using namespace std;

int count7(int num){

    if(num <= 0)
        return 0;
    
    return ( ( num%10 == 7 ) ? 1 : 0 ) + count7(num/10);

}


int main(){

    cout << "Enter The Number : ";
    int number;
    cin >> number;
    std::cout << "Number of occurrences of digit 7 in a number " << number << " is : " << count7(number) << endl;
    return 0;

}
