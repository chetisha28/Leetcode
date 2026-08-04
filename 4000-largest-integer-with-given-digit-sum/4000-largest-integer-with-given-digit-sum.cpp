class Solution {
public:
    int largestInteger(int n, int s) {
        if(s == 0){
            return s;
        }
        if( s > n*9){
            return -1;
        }
        int ans = 0;
        while(n >= 0){
            if(s>9){
                ans += pow(10,n-1)*9;
                s -= 9;
            }else{
                ans += pow(10,n-1)*s;
                s = 0;
            }
            n--;
        }

        return ans;
    }
};