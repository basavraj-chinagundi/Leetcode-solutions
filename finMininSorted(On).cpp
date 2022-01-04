class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        while(s!=e){
            if(nums[s]>nums[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return nums[s];
    }
};