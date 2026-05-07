class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>m;
        for(auto &p:points) {
            int d=p[0]*p[0]+p[1]*p[1];
            m.push({d,{p[0],p[1]}});
            if(m.size()>k) m.pop();
        }
        vector<vector<int>>ans;
        while(!m.empty()) {
            ans.push_back({m.top().second.first,m.top().second.second});
            m.pop();
        }
        return ans;
    }
};
