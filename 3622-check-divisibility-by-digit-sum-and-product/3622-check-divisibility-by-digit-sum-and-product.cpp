class Solution {
public:
    bool checkDivisibility(int n) {
        int dS = 0;
        int dP = 1;
        int num = n;
        while(n > 0){
            dP *= n%10;
            dS += n%10;
            n = n/10;
        }
        if(num%(dP+dS) == 0){
            return true;
        }
        return false;
    }
};