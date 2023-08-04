class Solution{
public:
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int x=St.top();
        St.pop();
        Reverse(St);
        
        insert(St,x);
    }
    
    void insert(stack<int> &St, int value){
        if(St.empty()){
            St.push(value);
            return;
        }
        int x=St.top();
        St.pop();
        insert(St,value);
        
        St.push(x);
    }
};
