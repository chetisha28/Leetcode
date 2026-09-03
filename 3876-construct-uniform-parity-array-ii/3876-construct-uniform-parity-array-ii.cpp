class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int m = INT_MAX;
       int odd = 0;

        for (int i = 0; i < nums1.size(); i++){
            m = min(nums1[i], m);
            if (nums1[i]%2 != 0) {
                odd++;
            }
        }
        bool ans = odd == 0 || m % 2 != 0;
        return ans;
    }
};