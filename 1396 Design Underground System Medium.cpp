class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>m1;
    map<pair<string,string>, vector<double>>m2;
    UndergroundSystem() {
        m1.clear();
        m2.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        m1[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        m2[{m1[id].first,stationName}].push_back(t-m1[id].second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double s=m2[{startStation,endStation}].size();
        double sum=0;
        for(auto a:m2[{startStation,endStation}]) sum+=a;
        return sum/s;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
