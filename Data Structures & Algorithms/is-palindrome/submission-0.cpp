class Solution {
public:
    bool isPalindrome(string m) {
        
        string s="";
        for(auto i:m){
            if((i>='a'&&i<='z')||(i>='0'&&i<='9')) s+=i;
            else if ((i>='A'&&i<='Z')) s+=(i-'A'+'a');
        }
        int n = s.size();
        int k;
        if(n%2) k=n/2;
        else k=n/2-1;
        for(int i=0;i<=k;i++){
            if(s[i]!=s[n-1-i]) {
                return false;
                return 0;
            }
        }
        return true;
    }
};
