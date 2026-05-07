class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>count;
        for(auto c:tasks) count[c]++;
        int ans=0;
        priority_queue<int>pq;
        for(auto const&[t,c]:count){
            pq.push(c);
                    }
        queue<pair<int,int>>time;
        while(!pq.empty() || !time.empty()){
            ans++;
            if(!pq.empty()){
                int f=pq.top()-1;
                pq.pop();
                if(f>0) time.push({f,ans+n});
            }
            if(!time.empty()&&time.front().second==ans) {
                pq.push(time.front().first);
                time.pop();
            }
            
        }
        return ans;
    }
};
