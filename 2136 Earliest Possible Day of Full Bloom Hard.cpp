class Solution {
public:
    int earliestFullBloom(vector<int> &plantTime, vector<int> &growTime) {
        vector<int> id(plantTime.size());
        iota(id.begin(), id.end(), 0);
        sort(id.begin(), id.end(), [&](int i, int j) { return growTime[i] > growTime[j]; });
        int ans = 0, day = 0;
        for (int i : id) {
            day += plantTime[i];
            ans = max(ans, day + growTime[i]);
        }
        return ans;
    }
};




class Solution {
public:
    static bool comp(pair <int,int> p1,pair <int,int> p2)
    {
        return p1.second > p2.second;
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector <pair<int,int>>v; 
        for(int i=0;i<plantTime.size();i++)
        {
            v.push_back({plantTime[i],growTime[i]});
        }
        sort(v.begin(),v.end(),comp);
        int start = 0;
        int ans = 0;
        for(int i=0;i<plantTime.size();i++)
        {
            start += v[i].first;
            ans = max(ans , start + v[i].second);
        }
        return ans;
    }
};








class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> plant(n);        
        
        for(int i=0; i<n; i++) {
			// store growTime[i] & plantTime[i] in pair
            plant[i] = {growTime[i], plantTime[i]};
        }
        
		// sort the vector in non-increasing order 
		// to get grow time of plants in descending order
        sort(plant.begin(), plant.end(),  greater<pair<int, int>>());
        
        int day = 0;
        int ans = 0;
        
        for(int i=0; i<n; i++) {
			// update value of day when planting
            day += plant[i].second;
			// update ans with max of current day + grow time
            ans = max(ans, day+plant[i].first);
        }
        
        return ans;
    }
};
