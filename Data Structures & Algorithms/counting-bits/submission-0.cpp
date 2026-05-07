class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int k=0;k<=n;k++){
            int t=0;
            int i=k;
             while(i){
                t+=i&1;
                i=i>>1;
             } 
             ans.push_back(t);
        }
        return ans;
    }
};
