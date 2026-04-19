class Solution {
   public:
   struct DSU {
    vector<int> parent, size;

    // constructor
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    // find with path compression
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    // union by size
    bool unite(int a, int b) {
        int pa = find(a);
        int pb = find(b);

        if (pa == pb) return false; // already connected (cycle)

        if (size[pa] < size[pb]) swap(pa, pb);

        parent[pb] = pa;
        size[pa] += size[pb];
        return true;
    }
};
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      int n=0;
      for(auto edge:edges){
        n=max({n,edge[0],edge[1]});
      }
      auto s=new DSU(n+1);
      vector<int> ans;
      for(auto edge:edges){
        if(s->find(edge[0])==s->find(edge[1])) ans={edge[0],edge[1]};
        s->unite(edge[0],edge[1]);
      }
      return ans;
    }
};
