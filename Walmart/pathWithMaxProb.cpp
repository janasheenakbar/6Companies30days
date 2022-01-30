
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& sP, int start, int end) {
    
    vector<vector<pair<int,double>>> graph(n);
    bool flag = false;
    for(int i = 0;i< edges.size();i++){
        graph[edges[i][0]].push_back({edges[i][1], sP[i]});
        graph[edges[i][1]].push_back({edges[i][0], sP[i]});
        if(edges[i][0] == end || edges[i][1] == end) flag = true;
    }
    if(!flag) return 0;
    
    
    vector<double>maxProb(n, INT_MIN);
    priority_queue<pair<double,int>>pq;
    pq.push({1,start});
    
    while(!pq.empty()){
        
        double prob = pq.top().first;
        int src  = pq.top().second;
        pq.pop();
        
        for(auto v : graph[src]){
            int s = v.first;
            double p = v.second;
        
            if(maxProb[s] < prob * p){
                maxProb[s] = prob * p;
                pq.push({maxProb[s], s});
            }
        }
    }
    
    return maxProb[end] != INT_MIN? maxProb[end]: 0;

    }
};
