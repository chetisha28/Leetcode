class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> duplicate;
        duplicate.push(s[0]);
        for(int i = 1; i < s.length(); i++){
           if(duplicate.empty() || duplicate.top() != s[i]){
             duplicate.push(s[i]);
           }else{
             duplicate.pop();
           }
        }
        string ans = "";
        while(!duplicate.empty()){
            ans += duplicate.top();
            duplicate.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};