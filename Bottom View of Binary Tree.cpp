class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(!root) return ans;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* node = temp.first;
            int level = temp.second;
            
            mp[level] = node->data;
            if(node->left){
                q.push({node->left, level-1});
            }
            if(node->right){
                q.push({node->right, level+1});
            }
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
