class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     priority_queue<int> pq;
     for(auto stone:stones) pq.push(stone);
     while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        if(a!=b) pq.push(a-b);
     }
     int res=0;
     if(!pq.empty()) res=pq.top();
     return res;
    }
};
