class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // for(int i=0;i<n-1;i++) {
        //     if(nums[i]==nums[i+1]) return true;
        // }
        // return false;
        set<int>temp;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(temp.find(nums[i])!=temp.end()) return true;
            temp.insert(nums[i]);
        }
        return false;
    }
};