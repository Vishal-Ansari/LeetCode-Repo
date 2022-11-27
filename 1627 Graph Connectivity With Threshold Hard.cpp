class Solution {
public:
int * parent;

    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }
    void union_(int a,int b){
        a=find(a);
        b=find(b);
        parent[a]=b;
    }
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        parent= new int[n+1];
        for(int i=1;i<=n;i++) parent[i]=i;

        for(int i=threshold+1;i<n;i++){
            int m=1;
            while(m*i<=n){
                union_(i,i*m);
                m++;
            }
        }

        vector<bool>ans;
        for(auto a:queries){
            ans.push_back(find(a[0])==find(a[1]));
        }
        return ans;
    }
};




// TLE
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
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        parent= new int[n+1];
        for(int i=1;i<=n;i++) parent[i]=i;

        for(int i=threshold+1;i<n;i++){
            int m=1;
            while(m*i<=n){
                union_(i,i*m);
                m++;
            }
        }

        vector<bool>ans;
        for(auto a:queries){
            ans.push_back(find(a[0])==find(a[1]));
        }
        return ans;
    }
};
