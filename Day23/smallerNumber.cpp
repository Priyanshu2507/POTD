#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        result[i] = count;
    }
    return result;
}


#include <iostream>
int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> result = smallerNumbersThanCurrent(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
