class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int a = nums[i];
            int p = 0;
            for(; a > 0; a /= 10){
                p += a%10;
            }
            if(p == i){
                return i;
            }
        }
        return -1;
    }
};