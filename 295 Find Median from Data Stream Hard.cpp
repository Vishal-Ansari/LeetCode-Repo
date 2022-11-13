class MedianFinder 
{
    priority_queue<int> sh, lh;
public:    
    void addNum(int num) 
    {
        lh.push(-num);
        sh.push(-lh.top());
        lh.pop();
        
        if (sh.size() > lh.size())
            lh.push(-sh.top()), sh.pop();
    }
    
    double findMedian() 
    {
        if (sh.size() == lh.size())
            return (sh.top() - lh.top()) / 2.0;
        return -lh.top();
    }
};




// TLE
// class MedianFinder {
// public:
//     vector<double> arr;
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         arr.push_back(num);
//     }
    
//     double findMedian() {
//         sort(arr.begin(),arr.end());
//         int n = arr.size();
//         if(n%2 == 0){
//             double ans = (arr[(n/2)-1]+arr[n/2])/2;
//             return ans;
//         }
//         return arr[n/2];
//     }
// };


// Approach 2: (Max-Min Heap) ✅

// class MedianFinder {
// public:
//     priority_queue<int> max_heap;
//     priority_queue<int,vector<int>,greater<int>> min_heap;
    
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
//         if(max_heap.size() > 0 && num > max_heap.top())
//         {
//             min_heap.push(num);
//         }
//         else
//         {
//             max_heap.push(num);
//         }
//         if(max_heap.size() > min_heap.size()+1)
//         {
//             min_heap.push(max_heap.top());
//             max_heap.pop();
//         }
//         if(min_heap.size() > max_heap.size()+1)
//         {
//             max_heap.push(min_heap.top());
//             min_heap.pop();
//         }
//     }
    
//     double findMedian() {
//         if(max_heap.size() == min_heap.size())
//         {
//             return (max_heap.top()+min_heap.top())/2.0;
//         }
//         if(max_heap.size() > min_heap.size())
//         {
//             return max_heap.top();
//         }
//         else
//         {
//             return min_heap.top();
//         }
//     }
// };
