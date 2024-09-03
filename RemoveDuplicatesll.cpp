#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    if (nums.size() <= 2) return nums.size();

        int k = 2; // Start from the third element since the first two can be kept as is

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k; // The new length of the array after removing duplicates
        
    }
};