class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        int sP = nums[0];
        while(i < n ){
            if(nums[i] != nums[i-1] + 1){
                break;
            }
            sP += nums[i];
            i++;
        }
        int ans = sP;
        sort(nums.begin(),nums.end());
        for(int j = 0; j < n; j++){
            if(nums[j] == ans){
                ans++;
            }
        }

        return ans;

    }
};