class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
       stack<int> st;
       int n=q.size();
       while(k--){
           st.push(q.front());
           q.pop();
           n--;
       }
       while(!st.empty()){
           q.push(st.top());
           st.pop();
       }
       while(n--){
           int x=q.front();
           q.pop();
           q.push(x);
       }
       return q;
    }
};
