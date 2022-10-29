class TweetCounts {
public:
    unordered_map<string,vector<int>>mp;
    TweetCounts() {
        mp.clear();
    }
    
    void recordTweet(string tweetName, int time) {
        mp[tweetName].push_back(time);
    }
    
    vector<int> getTweetCountsPerFrequency(string f, string t, int st, int et) {
        if(f=="minute"){
            vector<int> ans((et-st)/60+1,0);
            for(auto a:mp[t]) if(a>=st &&a<=et) ans[(a-st)/60]++;
            return ans;
        }
        else if(f=="hour"){
            vector<int> ans((et-st)/3600+1,0);
            for(auto a:mp[t]) if(a>=st &&a<=et) ans[(a-st)/3600]++;
            return ans;
        }
        else{
            vector<int> ans((et-st)/(24*3600)+1,0);
            for(auto a:mp[t]) if(a>=st &&a<=et) ans[(a-st)/(24*3600)]++;
            return ans;
        }
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 = obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */
