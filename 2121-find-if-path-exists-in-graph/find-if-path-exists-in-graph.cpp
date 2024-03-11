class Solution {
public:
    map<int,int> mp;

    // Find operation with path compression
    int find(int n) {
        if (mp.find(n) == mp.end())
            mp[n] = n;
        return mp[n] == n ? n : mp[n] = find(mp[n]);
    }

    // Union operation
    void uni(int a, int b) {
        int x = find(a);
        int y = find(b);
        mp[x] = y; // Set the parent of one node to be the other node's parent
    }

    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        // Initialize parents
        for (int i = 0; i < n; i++) {
            mp[i] = i;
        }

        // Union all edges
        for (const auto& edge : edges) {
            uni(edge[0], edge[1]);
        }

        // Check if s and d belong to the same connected component
        return find(s) == find(d);
    }
};
