/*
We have triangle made of blocks. The topmost row has 1 block, the next row down has 2 blocks, the next row has 3 blocks, and so on. Compute recursively (no loops or multiplication) the total number of blocks in such a triangle with the given number of rows.

triangle(0) → 0
triangle(1) → 1
triangle(2) → 3

*/
#include<iostream>

using namespace std;

int triangle(int no_rows){

    if(no_rows == 0)
        return 0;
 
    return no_rows + triangle(no_rows - 1);

}


int main(){

    cout << "Enter The Number of Rows : ";
    int number;
    cin >> number;
    std::cout << "Total Number of Blocks for " << number << " rows is : " << triangle(number) << endl;
    return 0;

}
