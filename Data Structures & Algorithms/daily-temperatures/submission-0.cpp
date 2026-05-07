class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        vector<int>res(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty()&&temperatures[s.top()]<temperatures[i]) {
                int t=s.top();
                s.pop();
                res[t]=i-t;
            }
            s.push(i);
        }
        return res;
    }
};
