class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> subset;

        createSubset(nums, 0, answer, subset);
        return answer;        
    }

    void createSubset(vector<int>& nums, int index, vector<vector<int>>& answer, vector<int>& subset) {
        if (index == nums.size()) {
            answer.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        createSubset(nums, index + 1, answer, subset);

        subset.pop_back();
        createSubset(nums, index + 1, answer, subset);
    }    
};