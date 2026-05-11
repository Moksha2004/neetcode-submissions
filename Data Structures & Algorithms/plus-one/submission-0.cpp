class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int c=1,k=0;
        for(int i=n-1;i>=0;i--){
            k=digits[i];
            digits[i]=(k+c)%10;
            c=(k+c)/10;
        }
    if(c) digits.insert(digits.begin(),c);
    return digits;
    }
};
