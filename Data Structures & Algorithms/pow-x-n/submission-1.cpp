class Solution {
public:
    double myPow(double x, int n) {
        if(!x) return 0;
        if(!n) return 1;
        int p=abs(n);
        double ans=1;
        while(p){
            if(p&1) ans*=x;
            x*=x;
            p>>=1;
        }
    return n<0?1/ans:ans;
    }
};
