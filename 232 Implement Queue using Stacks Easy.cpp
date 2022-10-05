class MyQueue {
public:
    stack<int>st1 , st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int a= peek();
        st2.pop();
        return a;
    }
    
    int peek() {
        if(st2.empty()){
        while(!st1.empty()){
            int x=st1.top();
            st2.push(x);
            st1.pop();
        }
        }
        return st2.top();
    }
    
    bool empty() {
        return (st1.empty() && st2.empty());
    }
};