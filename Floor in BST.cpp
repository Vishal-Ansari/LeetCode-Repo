class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        Node* ans = root;
        if(root == NULL)
            return -1;
        if(root -> data == x)
            return x;
        int ans1 = -1, ans2 = -1, ans3 = -1;
        ans1 = floor(root -> left, x);
        ans2 = (x - root -> data >= 0) ? root -> data : -1;
        if(ans2 != -1)
            ans3 = floor(root -> right, x);
        if(ans3 != -1)
            return ans3;
        if(ans2 != -1)
            return ans2;
        if(ans1 != -1)
            return ans1;
        return -1;
    }
