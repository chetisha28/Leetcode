class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> m(nums);
        for (int i = n-2; i >= 0; i--) {
            m[i] = min(nums[i], m[i+1]);
        }
        int largest = nums[0];
        for (int i = 0; i < n; i++) {
            largest = max(nums[i], largest);
            if (largest - m[i] <= k) {
                return i;
            } 
        }
        return -1;
    }
};
