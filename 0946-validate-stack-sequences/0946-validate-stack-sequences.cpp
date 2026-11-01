class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        stack<int> check; 
        int j = 0;
        for (int i = 0; i <n; i++) {
            check.push(pushed[i]);
            while (!check.empty() && check.top() == popped[j]) {
                check.pop();
                j++;
            }
        }
        return check.empty();
    }
};