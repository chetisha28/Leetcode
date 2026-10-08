class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        string component;
        path += '/';
        for (char c : path) {
            if (c == '/') {
                if (component == "..") {
                    if (!stack.empty()) {
                        stack.pop_back();
                    }
                } else if (!component.empty() && component != ".") {
                    stack.push_back(component);
                }
                component.clear();
            } else {
                component += c;
            }
        }
        string result;
        for (const string& dir : stack) {
            result += "/" + dir;
        }
        return result.empty() ? "/" : result;
    }
};