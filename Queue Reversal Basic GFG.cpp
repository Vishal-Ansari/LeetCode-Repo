class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        int size=q.size();
        vector<int> arr;
        while(size--){
            int x=q.front();
            q.pop();
            arr.push_back(x);
        }
        size=arr.size();
        for(int i=size-1;i>=0;i--){
            q.push(arr[i]);
        }
        return q;
    }
};
