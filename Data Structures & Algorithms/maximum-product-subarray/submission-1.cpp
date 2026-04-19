class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int curr_min=nums[0];
        int curr_max=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int a=curr_max;
            int b=curr_min;
            curr_max=max({nums[i]*a,nums[i]*b,nums[i]});
            curr_min=min({nums[i]*a,nums[i]*b,nums[i]});
            ans=max(ans,curr_max);
        }
        return ans;
    }
};
