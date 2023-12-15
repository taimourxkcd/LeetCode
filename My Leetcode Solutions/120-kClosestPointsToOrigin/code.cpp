class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> pq;
        vector<vector<int>> res;

        for(int i = 0; i < points.size(); i++){
            int dis = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            if(pq.size() < k) pq.push({dis, points[i][0], points[i][1]});
            else if(pq.top()[0] > dis) {
                pq.pop();
                pq.push({dis, points[i][0], points[i][1]});
            }
        }

        while(!pq.empty()){
            res.push_back({pq.top()[1], pq.top()[2]});
            pq.pop();
        }

        return res;
    }
};