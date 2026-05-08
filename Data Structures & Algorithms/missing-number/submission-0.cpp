class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=n*(n+1)/2;
        int k=0;
        for(auto i:nums) k+=i;
        return ans-k;
    }
};
