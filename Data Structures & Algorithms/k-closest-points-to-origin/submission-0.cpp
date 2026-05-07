class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto c=[](const vector<int>&a,const vector<int>&b ) {return a[0]*a[0]+a[1]*a[1] > b[0]*b[0]+b[1]*b[1];};
        priority_queue<vector<int>,vector<vector<int>>,decltype(c)> minheap(c);
        for(const auto&p:points) minheap.push({p[0],p[1]});
        vector<vector<int>>ans;
        for(int i=0;i<k;i++) {
            ans.push_back(minheap.top());
            minheap.pop();
        }
    return ans;
    }
};
