class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        int count = 0;
        for (char c : s) {
            if (c == '(') {
                count++;
                ans += c;
            } else if (c == ')') {
                if (count > 0) {
                    ans += c;
                    count--;
                }
            } else {
                ans += c;
            }
        }
        if (count == 0) {
            return ans;
        }
        string result;
        int closeCount = 0;
        for (int i = ans.size() - 1; i >= 0; i--) {
            char c = ans[i];
            if (c == ')') {
                closeCount++;
                result += c;
            } else if (c == '(') {
                if (closeCount > 0) {
                    closeCount--;
                    result += c;
                }
            } else {
                result += c;
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};