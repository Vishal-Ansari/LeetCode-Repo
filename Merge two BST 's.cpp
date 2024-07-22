class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
   void inorder(Node* root,vector<int> &arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int>arr;
       inorder(root1,arr);
       inorder(root2,arr);
       sort(arr.begin(),arr.end());
       return arr;

    }
};





// merge sort code
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void dfs(Node* root,vector<int>& arr){
        if(!root) return;
        dfs(root->left,arr);
        arr.push_back(root->data);
        dfs(root->right,arr);
    }
   
    
    vector<int> merge(Node *root1, Node *root2) {
        vector<int> arr1,arr2,ans;
        dfs(root1,arr1);
        dfs(root2,arr2);
        int n=arr1.size();
        int m=arr2.size();
        int i=0,j=0;
        while(i<n && j<m){
             if(arr1[i]<arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
};
