void count_nodes(Node* root,int &c){
    if(!root) return;
    count_nodes(root->left,c);
    c++;
    count_nodes(root->right,c);
}

void help(Node* root,Node* &cur,Node* &prev,int &c,int k,int &found){
    if(!root) return;
    help(root->left,cur,prev,c,k,found);
    if(prev==NULL){
        prev = root;
        c++;
    }
    else if(c==k){
        c++;
        cur = root;
        found = 1;
        return;
    }
    else if(found==0){
        c++;
        prev = root;
    }
    help(root->right,cur,prev,c,k,found);
}

float findMedian(struct Node *root)
{
      //Code here
      int n = 0;
      count_nodes(root,n);
      Node* cur = NULL;
      Node* prev = NULL;
      int c = 1;
      int x = (n/2)+1;
      int found = 0;
      help(root,cur,prev,c,x,found);
      if(n%2==1){
          float ans = (cur->data)*1.0;
          return ans;
      }
      else {
          float ans = ((cur->data+prev->data)*1.0)/(2*1.0);
          return ans;
      }
}
