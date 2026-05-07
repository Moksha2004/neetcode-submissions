class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>p;
        for(int i=0;i<position.size();i++) p.push_back({position[i],speed[i]});
        sort(p.rbegin(),p.rend());
        stack<double>s;
        for(auto& i:p){
            auto t=((double)(target-i.first)/i.second);
            if(s.empty()|| t>s.top()) s.push(t);
        }
        return s.size();    }
};
