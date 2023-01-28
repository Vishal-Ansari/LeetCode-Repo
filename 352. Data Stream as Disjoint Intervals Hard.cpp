class SummaryRanges {
set<int> s;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        s.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if(s.empty()) return {};
        vector<vector<int>>ans;
        int left=-1, right=-1;
        for(int x: s){
            if(left<0) left=right=x;
            else if(x==right+1) right=x;
            else{
                ans.push_back({left,right});
                left=right=x;
            }
        }
        ans.push_back({left,right});
        return ans;
    }
};




//java

class SummaryRanges {
    Set<Integer> s = new HashSet<Integer>();
    public SummaryRanges() {
        
    }
    
    public void addNum(int value) {
        s.add(value);
    }
    
    public int[][] getIntervals() {
        List<int[]> ans= new ArrayList<int[]>();
        if(s.isEmpty()) return null;
        int left=-1, right=-1;

        for(int x: s){
            if(left<0) left=right=x;
            else if(x==right+1) right=x;
            else{
                ans.add(new int[] {left,right});
                left=right=x;
            }
        }
        ans.add(new int[] {left,right});
        return ans.toArray(new int[ans.size()][]);
        
    }

}

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges obj = new SummaryRanges();
 * obj.addNum(value);
 * int[][] param_2 = obj.getIntervals();
 */
