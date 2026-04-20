class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>> distance(n,vector<int>(n,INT_MAX));
        distance[0][0]=grid[0][0];
        pq.push({grid[0][0],{0,0}});
        vector<int> dx={1,-1,0,0};
        vector<int> dy={0,0,1,-1};
        while(!pq.empty()){
    auto [curr_dis, pos] = pq.top();
    auto [x, y] = pos;
    pq.pop();

    if (curr_dis > distance[x][y]) continue;

    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx<0 || nx>=n || ny<0 || ny>=n) continue;

        int newDist = max(curr_dis, grid[nx][ny]);

        if(distance[nx][ny] > newDist){
            distance[nx][ny] = newDist;
            pq.push({newDist,{nx,ny}});
        }
    }
}
             return distance[n-1][n-1];
    }
};
