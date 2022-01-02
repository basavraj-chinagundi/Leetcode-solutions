class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxCurr=0;
        int maxUpdated=0;
        for(int i=1;i<prices.size();i++){
            maxCurr=max(0,maxCurr+=prices[i]-prices[i-1]); 
            maxUpdated=max(maxUpdated,maxCurr);
        }
        return maxUpdated;
    }
};