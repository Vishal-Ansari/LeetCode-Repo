class Solution{
    
    public:

    Node*createnode(int data)
    {
        Node*newnode=new Node(data);
        newnode->data=data;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    
    void inordertraversal(Node*root,vector<int>&arr)
    {
        if(root==NULL)
        {
            return;
        }
        
        inordertraversal(root->left,arr);
        arr.push_back(root->data);
        inordertraversal(root->right,arr);
    }
    
   Node*buildhelper(vector<int>&arr,int start,int end)
   {
       if(start>end)
       {
           return NULL;
       }
       
       int mid=(start+end)/2;
       Node*root=createnode(arr[mid]);
       root->left=buildhelper(arr,start,mid-1);
       root->right=buildhelper(arr,mid+1,end);
       return root;
   }
    Node* buildBalancedTree(Node* root)
    {
        vector<int>arr;
        inordertraversal(root,arr);
        return buildhelper(arr,0,arr.size()-1);
        
    }
};
