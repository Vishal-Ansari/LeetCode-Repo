class Solution {
public:
    vector<int> prevsmal(vector<int> &heights){
        vector<int>ans;
        stack<int> st;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            int res=st.empty()?-1:st.top();
            ans.push_back(res);
            st.push(i);
        }
        return ans;
    }
    
    vector<int> nextsmal(vector<int> &heights){
         vector<int>ans;
        stack<int> st;
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            int res=st.empty()?n:st.top();
            ans.push_back(res);
            st.push(i);
        }
    reverse(ans.begin(),ans.end());
        return ans;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int res=0;
        vector<int> ps=prevsmal(heights);
        vector<int> ns=nextsmal(heights);
        for(int i=0;i<n;i++){
            int area=(ns[i]-ps[i]-1)*heights[i];
            res=max(res,area);
        }
        return res;
    }
};