class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,ans=0;
        unordered_map<char,int>m;
        for(int r=0;r<s.size();r++){
            if(m.find(s[r])!=m.end()) l=max(m[s[r]]+1,l);
            m[s[r]]=r;
            ans=max(ans,r-l+1);
                  }
            return ans;  
    }
};
