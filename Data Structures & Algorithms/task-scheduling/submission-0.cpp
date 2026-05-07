class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>count;
        unordered_map<int,int>time;
        for(auto c:tasks) count[c]++;
        int ans=0;
        while(!count.empty()){
            vector<char>avail;
            for(auto &i:count){
                if(time[i.first]<=ans) avail.push_back(i.first);
            }
            if(!avail.empty()){
                char t=avail[0];
                for(char c:avail) if(count[c]>count[t]) t=c;
                count[t]--;
                if(!count[t]) count.erase(t);
                time[t]=ans+n+1;
            }
            ans++;
        }
        return ans;
    }
};
