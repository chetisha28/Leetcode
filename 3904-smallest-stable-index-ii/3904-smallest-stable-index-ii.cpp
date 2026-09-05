class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> pMax;
        pMax.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            pMax.push_back(max(nums[i],pMax[i-1]));
        }
        vector<int> sMin(nums.size());
        sMin[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2; i >=0; i--){
            sMin[i] = min(sMin[i+1], nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(pMax[i]- sMin[i] <= k){
                return i;
            }
        }
        return -1;
    }
};