class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        bool flag=false;
        for(auto i:mpp){
            if(i.second>1){
                flag=true;
                break;
            }
        }
        return flag;
    }
};