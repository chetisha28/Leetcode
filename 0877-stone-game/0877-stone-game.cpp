class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice = 0;
        int bob = 0;
        for(int i = 0; i <piles.size(); i++){
            alice += max(piles[i], piles[piles.size()-1-i]);
            i++;
            bob += max(piles[i], piles[piles.size()-1-i]);
        }
        if(alice < bob){
            return true;
        }

        return true;
    }
};