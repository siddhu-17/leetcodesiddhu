class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<tasks.size();i++){
            int val = tasks[i][0] + tasks[i][1];
            pq.push(val);
        }
        return pq.top();
    }
};