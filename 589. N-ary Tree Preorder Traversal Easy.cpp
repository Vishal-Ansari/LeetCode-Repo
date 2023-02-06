class Solution {
public:
    void solve(Node* root,vector<int>& ans){
        ans.emplace_back(root->val);
        for(int i=0;i<root->children.size();i++){
            solve(root->children[i],ans);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int>ans;
        if(!root) return ans;
        solve(root,ans);
        return ans;
    }
};




// iterative 


class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> stack; 
        vector<int> ans; 
        if(root==NULL) return ans;
        stack.push(root);
        while(!stack.empty()) 
        {
            Node* node=stack.top();
            stack.pop();
            ans.push_back(node->val);
            for(int i=node->children.size()-1;i>=0;i--) 
                stack.push(node->children[i]);
        }
        return ans;
    }
};
