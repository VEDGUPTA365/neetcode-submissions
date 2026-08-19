class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int res=INT_MAX;
        int l=1;
        int r=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            long long H=0;
            for(auto pile:piles) H+=(pile+mid-1)/mid;
            if(H<=h){
                r=mid-1;
                res=mid;
            }
            else l=mid+1;
        }
        return res;
    }
};
