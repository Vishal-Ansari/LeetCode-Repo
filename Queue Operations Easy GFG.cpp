class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        int size=q.size();
        int f=0;
        while(size--){
            int x=q.front();
            if(x==k) f++;
            q.pop();
            q.push(x);
        }
        return f;
    }
    
};
