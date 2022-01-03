class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0; 
        int newmax = INT_MIN;
        for(auto c : nums){
            curMax = max(c, curMax + c),
            newmax = max(newmax, curMax);
        }   
        return newmax;
    }
};