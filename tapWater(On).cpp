class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int prod;
        int maximum=INT_MIN;
        while(s<e){
            if(height[s]<height[e]){
                prod=height[s]*(abs(s-e));
                s++;
                maximum=max(maximum,prod);
            }
            else{
                prod=height[e]*(abs(s-e));
                e--;
                maximum=max(maximum,prod);
            }
        }
        return maximum;
    }
};