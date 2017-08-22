/*
Given an array of ints, compute recursively the number of times that the value 11 appears in the array. We'll use the convention of considering only the part of the array that begins at the given index. In this way, a recursive call can pass index+1 to move down the array. The initial call will pass in index as 0.

array11([1, 2, 11], 0) → 1
array11([11, 11], 0) → 2
array11([1, 2, 3, 4], 0) → 0

*/
#include <iostream>
#include <vector>
using namespace std;

int array11(vector<int>& arr, int index){

    if(index > arr.size())
        return 0;
 
    if(arr[index] == 11)
        return 1 + array11(arr, index+1);
    else  
        return array11(arr, index+1);

}

int main(){

    vector<int> arr1{1, 2, 11};
    cout << "array11([1, 2, 11], 0)" << " -> " << array11(arr1, 0) << endl;

    vector<int> arr2{11, 11};
    cout << "array11([11, 11], 0)" << " -> " << array11(arr2, 0) << endl;

    vector<int> arr3{1, 2, 3, 4};
    cout << "array11([1, 2, 3, 4], 0)" << " -> " << array11(arr3, 0) << endl;

}
