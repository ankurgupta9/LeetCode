class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] > nums[i + 1]) {
                decreasing = false;
            } else if (nums[i] < nums[i + 1]) {
                increasing = false;
            }

            if (!increasing && !decreasing) {
                return false;
            }
        }
        return true;
    }
};

//checking if array is increasing and decreasing both if yes return false else return true