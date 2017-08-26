/*
Given an array of ints, is it possible to choose a group of some of the ints, beginning at the start index, such that the group sums to the given target? However, with the additional constraint that all 6's must be chosen. (No loops needed.)

groupSum6(0, [5, 6, 2], 8) → true
groupSum6(0, [5, 6, 2], 9) → false
groupSum6(0, [5, 6, 2], 7) → false
groupSum6(0, [6, 6, 6], 12) → true
groupSum6(0, [6, 6, 6], 18) → true
groupSum6(0, [6, 6, 6], 13) → false
groupSum6(0, [6, 6, 2], 12) → false
*/
#include <iostream>
#include <vector>
using namespace std;

bool groupSum6(vector<int>& arr, int start, int target){

    if(start >= arr.size())
        return target == 0;

    if(groupSum6(arr, start + 1, target - arr[start]))
        return true;
  
    if(arr[start] != 6 && groupSum6(arr, start + 1, target))
        return true;

    return false;
}

int main(){

    vector<int> arr {5, 6, 2};
    string res = groupSum6(arr, 0, 8) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupSum6(arr, 0, 9) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupSum6(arr, 0, 7) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    vector<int> arr1 {6, 6, 6};
    res = groupSum6(arr, 0, 12) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupSum6(arr1, 0, 18) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupSum6(arr1, 0, 13) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    vector<int> arr2 {6, 6, 2};
    res = groupSum6(arr2, 0, 12) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    return 0;

}
