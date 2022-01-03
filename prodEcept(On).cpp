class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> ans(s);
        
        //Multiply from left to right
        ans[0] = 1; //ans[i] == leftProduct
        for (int i=0; i<s-1; i++){
            ans[i+1] = ans[i] * nums[i];
        }
        
        //Multiply from right (index size-1) to left
        int rightProduct=1;
        for(int i=s-1; i>=0; i--){
            ans[i] = rightProduct * ans[i];
            rightProduct = rightProduct * nums[i];
        }
            
        return ans;
    }
};