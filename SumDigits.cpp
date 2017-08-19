/*
Given a non-negative int n, return the sum of its digits recursively (no loops). Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

sumDigits(126) → 9
sumDigits(49) → 13
sumDigits(12) → 3
*/
#include<iostream>
using namespace std;

int sumDigits(int num){

    if(num <= 0)
        return 0;

    return (num%10) + sumDigits(num/10);

}

int main(){
   
    cout << "Enter The Number : ";
    int number;
    cin >> number;
    std::cout << "Sum of Digits of number " << number << " is : " << sumDigits(number) << endl;
    return 0;
}
