/*
Given an array of ints, compute recursively if the array contains somewhere a value followed in the array by that value times 10. We'll use the convention of considering only the part of the array that begins at the given index. In this way, a recursive call can pass index+1 to move down the array. The initial call will pass in index as 0.

array220([1, 2, 20], 0) → true
array220([3, 30], 0) → true
array220([3], 0) → false

*/
#include <iostream>
#include <vector>
using namespace std;

bool array220(vector<int>& arr, int index){

    if(index > arr.size() || arr.size() == 1)
        return false;
 
    if(arr[index]*10 == arr[index+1])
        return true;
    else  
        return array220(arr, index+1);

}

int main(){

    vector<int> arr1{1, 2, 20};
    cout << "array220([1, 2, 20], 0)" << " -> " << array220(arr1, 0) << endl;

    vector<int> arr2{3, 30};
    cout << "array220([3, 30], 0)" << " -> " << array220(arr2, 0) << endl;

    vector<int> arr3{3};
    cout << "array220([3], 0)" << " -> " << array220(arr3, 0) << endl;

}
