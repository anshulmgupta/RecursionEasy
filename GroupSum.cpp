/*
Given an array of ints, is it possible to choose a group of some of the ints, such that the group sums to the given target? This is a classic backtracking recursion problem. Once you understand the recursive backtracking strategy in this problem, you can use the same pattern for many problems to search a space of choices. Rather than looking at the whole array, our convention is to consider the part of the array starting at index start and continuing to the end of the array. The caller can specify the whole array simply by passing start as 0. No loops are needed -- the recursive calls progress down the array.

groupSum(0, [2, 4, 8], 10) → true
groupSum(0, [2, 4, 8], 14) → true
groupSum(0, [2, 4, 8], 9) → false

*/
#include <iostream>
#include <vector>
using namespace std;

bool groupSum(vector<int>& arr, int start, int target){

    if(start >= arr.size())
        return target == 0;

    if(groupSum(arr, start + 1, target - arr[start]))
        return true;
  
    if(groupSum(arr, start + 1, target))
        return true;

    return false;
}

int main(){

    vector<int> arr {2, 4, 8};
    string res = groupSum(arr, 0, 10) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupSum(arr, 0, 14) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupSum(arr, 0, 9) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    return 0;

}
