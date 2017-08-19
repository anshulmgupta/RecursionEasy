#include<iostream>

using namespace std;

int factorial(int num) {

    if(num <= 1)
        return 1;

    return num * factorial(num - 1);

}

int main() {

    cout << "Enter The Number : ";
    int number;
    cin >> number;
    std::cout << "Factorial for number " << number << " is : " << factorial(number) << endl;
    return 0;

}
