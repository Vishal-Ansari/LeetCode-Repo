class Solution {
public:
    int * parent;
    int find(int x){
        if(parent[x]==x) return x;
        return find(parent[x]);
    }
    void union_(int a,int b){
        a=find(a);
        b=find(b);
        parent[a]=b;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent= new int[n+1];
        for(int i=1;i<=n;i++) parent[i]=i;

        for(auto a: edges){
            if(find(a[0])==find(a[1])) return a;
            union_(a[0],a[1]);
        }
        return {};
    }
};



// less time complexity

class Solution {
public:
    int * parent;
    int *rank;
    int find(int x){
        if(parent[x]==x) return x;
        return find(parent[x]);
    }
    void union_(int a,int b){
        a=find(a);
        b=find(b);
        if(rank[a]>rank[b]){
            parent[b]=a;
            rank[a]+=rank[b];
        }
        else{
            parent[a]=b;
            rank[b]+=rank[a];
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        parent= new int[n+1];
        rank= new int[n+1];
        for(int i=1;i<=n;i++) parent[i]=i, rank[i]=1 ;

        for(auto a: edges){
            if(find(a[0])==find(a[1])) return a;
            union_(a[0],a[1]);
        }
        return {};
    }
};
