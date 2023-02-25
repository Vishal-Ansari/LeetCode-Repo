class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int minVal = INT_MAX;
        for (int num : nums) {
            if (num % 2 == 1)
                num = num * 2;
            pq.push(num);
            minVal = min(minVal, num);
        }
        int minDeviation = INT_MAX;
        while (true) {
            int maxVal = pq.top();
            pq.pop();
            minDeviation = min(minDeviation, maxVal - minVal);
          
            if (maxVal % 2 == 1)
                break;
            maxVal = maxVal / 2;
            minVal = min(minVal, maxVal);
            pq.push(maxVal);
        }
        return minDeviation;
    }
};




class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 != 0)
                nums[i] *= 2;
            st.insert(nums[i]);
        }
        int mnDev = *st.rbegin() - *st.begin();
        while(*st.rbegin() % 2 == 0){
            int temp = *st.rbegin();
            st.erase(temp);
            temp /= 2;
            st.insert(temp);
            mnDev = min(mnDev, *st.rbegin() - *st.begin());
        }   
        return mnDev;
    }
};
