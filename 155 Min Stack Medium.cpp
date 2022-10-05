class MinStack {
public:
    stack<int> st1, st2;
    MinStack() {
        
    }
    
    void push(int val) {
       if(st2.empty()|| val<=st2.top())
            st2.push(val);
        st1.push(val);
    }
    
    void pop() {
        if(st1.top()==st2.top())
            st2.pop();
    
        st1.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};