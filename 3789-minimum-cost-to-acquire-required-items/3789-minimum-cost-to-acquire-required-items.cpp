class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int mi = min(need1, need2);
        long long minimum = min(costBoth, cost1 + cost2);

        long long ans = minimum * mi;

        int rem1 = need1 - mi, rem2 = need2 - mi;
        if(rem1 > 0){
            ans += ((long long)min(costBoth, cost1) * rem1);
        }

        if(rem2 > 0){
            ans += ((long long)min(costBoth, cost2) * rem2);
        }
        return ans;
    }
};