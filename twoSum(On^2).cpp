class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> alpha;
      for(int i=0;i<nums.size()-1;i++){
          for(int j=i+1;j<=nums.size()-1;j++){
              if(nums[i]+nums[j]==target){
                    alpha.push_back(i);
                    alpha.push_back(j);
              }
          }
      }
        return alpha;
    }
};