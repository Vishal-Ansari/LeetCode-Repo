	class Solution{
    public:
    int find_set(int v, vector<int> &parent)
    {
        if (v != parent[v])
        {
            v = find_set(parent[v], parent);
        }
        return v;
    }

    void union_sets(int x, int y, vector<int> &parent, vector<int> &rank)
    {
        x = find_set(x, parent);
        y = find_set(y, parent);
        if (rank[x] < rank[y])
        {
            swap(x, y);
        }
        parent[y] = x;
        rank[x] += rank[y];
    }

    int detectCycle(int V, vector<int> adj[])
    {
        vector<int> parent(V);
        vector<int> rank(V, 1);
        unordered_set<pair<int, int>, PairHash> s;

        for (int i = 0; i < V; i++)
        {
            parent[i] = i;
        }

        for (int u = 0; u < V; u++)
        {
            for (int j = 0; j < adj[u].size(); j++)
            {
                int v = adj[u][j];
                if (s.count({u, v}) || s.count({v, u}))
                {
                    continue;
                }
                s.insert({u, v});
                int x = find_set(u, parent);
                int y = find_set(v, parent);
                if (x == y)
                {
                    return 1;
                }
                union_sets(x, y, parent, rank);
            }
        }

        return 0;
    }
    private:
    struct PairHash
    {
        template <class T1, class T2>
        size_t operator()(const pair<T1, T2> &p) const
        {
            auto h1 = hash<T1>{}(p.first);
            auto h2 = hash<T2>{}(p.second);
            return h1 ^ h2;
        }
    };
