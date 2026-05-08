class Solution {
public:
    int reverse(int x) {
        long ans=rec(abs(x),0);
        if(ans<=INT_MIN || ans>=INT_MAX) return 0;
        return ans*(x<0?-1:1);
    }
    long rec(int x, long ans){
        if(!x) return ans;
        ans=(ans*10+x%10);
        return rec(x/10,ans);
    }
};
