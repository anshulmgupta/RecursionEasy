/*
Given an array of ints, compute recursively if the array contains a 6. We'll use the convention of considering only the part of the array that begins at the given index. In this way, a recursive call can pass index+1 to move down the array. The initial call will pass in index as 0.

array6([1, 6, 4], 0) → true
array6([1, 4], 0) → false
array6([6], 0) → true

*/
#include <iostream>
#include <vector>
using namespace std;

bool array6(vector<int>& arr, int index){

    if(index > arr.size())
        return false;
 
    if(arr[index] == 6)
        return true;

    return array6(arr, index+1);
}

int main(){

    vector<int> arr1{1, 6, 4};
    cout << "array6([1, 6, 4], 0)" << "->" << array6(arr1, 0) << endl;

    vector<int> arr2{1, 4};
    cout << "array6([1, 4], 0)" << "->" << array6(arr2, 0) << endl;


    vector<int> arr3{6};
    cout << "array6([6], 0)" << "->" << array6(arr3, 0) << endl;

}
