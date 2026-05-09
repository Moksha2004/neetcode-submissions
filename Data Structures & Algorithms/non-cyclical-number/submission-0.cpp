class Solution {
public:
    int k(int n){
        int t=0;
        while(n){
            t+=(n%10)*(n%10);
            n/=10;
        }
        return t;
    }
    bool isHappy(int n) {
        set<int>s;
        int sum=0;
        sum=k(n);
        n=sum;
        s.insert(sum);
        while(n!=1){
            sum=k(n);
            if(s.find(sum)!=s.end()) return false;
            s.insert(sum);
            n=sum;
        }
        return true;
    }
};
