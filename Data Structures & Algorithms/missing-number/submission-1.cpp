class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=n;
        int k=0;
        // for(auto i:nums) ans^=i;
        for(int i=0;i<n;i++) ans^=i^nums[i];
        return ans;
    }
};
