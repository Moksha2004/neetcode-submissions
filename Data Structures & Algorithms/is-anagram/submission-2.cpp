class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        if(n!=m) return false;
        // for(int i=0;i<n;i++) {
        //     if(t.find(s[i])==string::npos)return false; 
        // }
        // return true;
        //wrong approach, the frequencies might difefr this way;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // else return false;

        unordered_map<char,int>counts;
        for(int i=0;i<n;i++) {
            counts[s[i]]++;counts[t[i]]--;
        }
        for(auto const& [val,c]:counts){
            if(c!=0) return false;
        }
        return true;
    }
};
