class Solution {
public:
    bool isSorted(vector<int>& nums, int n) {

        int count = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }

        }

        return count <= 1;
    }

    bool check(vector<int>& nums) {
        return isSorted(nums, nums.size());
    }
};