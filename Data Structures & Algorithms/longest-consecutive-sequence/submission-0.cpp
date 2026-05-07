class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>m(nums.begin(),nums.end());
        int ans=0;
        for(auto i:nums){
            if(m.find(i-1)==m.end()){int t=1;
            while(m.find(i+t)!=m.end()) t++;
            ans=max(ans,t);
            }

        }
        return ans;    }
};
