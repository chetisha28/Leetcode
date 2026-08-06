class Solution {
public:
    int smallestNumber(int n, int t) {
        int original = n;
        int p = 1;

        while (n != 0) {
            p *= n % 10;
            n /= 10;
        }

        if (p % t == 0)
            return original;

        return smallestNumber(original + 1, t);
    }
};