class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> alpha;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int v=target-nums[i];
            if(m.find(v)!=m.end()){
                alpha.push_back(m[v]);
                alpha.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return alpha;
    }
};