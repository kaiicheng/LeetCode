// brute force

// Time complexity: O(n^2)O(n^2). 
// For each element, we try to find its complement by looping through the rest of the array 
// which takes O(n) time. Therefore, the time complexity is O(n^2)O(n^2).

// Space complexity: O(1). The space required does not depend on the size of the input array, 
// so only constant space is used.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int a = 0; a < nums.size(); a++)
            for (int b = a + 1; b < nums.size(); b++){
                if (nums[a] + nums[b] == target){
                    return {a, b};
                }
            }
        return {};
    }
};