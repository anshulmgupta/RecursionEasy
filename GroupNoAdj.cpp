/*
Given an array of ints, is it possible to choose a group of some of the ints, such that the group sums to the given target with this additional constraint: If a value in the array is chosen to be in the group, the value immediately following it in the array must not be chosen. (No loops needed.)

groupNoAdj(0, [2, 5, 10, 4], 12) → true
groupNoAdj(0, [2, 5, 10, 4], 14) → false
groupNoAdj(0, [2, 5, 10, 4], 7) → false

*/
#include <iostream>
#include <vector>
using namespace std;

bool groupNoAdj(vector<int>& arr, int start, int target){

    if(start >= arr.size())
        return target == 0;

    if(groupNoAdj(arr, start + 2, target - arr[start]))
        return true;
  
    if(groupNoAdj(arr, start + 1, target))
        return true;

    return false;
}

int main(){

    vector<int> arr {2, 5, 10, 4};
    string res = groupNoAdj(arr, 0, 12) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupNoAdj(arr, 0, 14) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupNoAdj(arr, 0, 7) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    res = groupNoAdj(arr, 0, 9) ? "true" : "false";
    cout << "Sum exists : " << res << endl;

    return 0;

}
