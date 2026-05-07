class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto str:strs) {ans+=to_string(str.size()); ans+='#';ans+=str;}
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int l=stoi(s.substr(i, j - i));
            i=j+1;
            j=i+l;
            ans.push_back(s.substr(i,l));
            i=j;
        }
        return ans;
    }
};
