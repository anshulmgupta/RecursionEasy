/*
We have a number of bunnies and each bunny has two big floppy ears. We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

bunnyEars(0) → 0
bunnyEars(1) → 2
bunnyEars(2) → 4

*/
#include<iostream>

using namespace std;

int bunnyEars(int no_bunny){

    if (no_bunny == 0)
        return 0;
    return 2 + bunnyEars(no_bunny - 1); 

}


int main(){

    cout << "Enter The Number of Bunnies : ";
    int number;
    cin >> number;
    std::cout << "Total number of bunny ears for " << number << " bunnies is : " << bunnyEars(number) << endl;
    return 0;

}
