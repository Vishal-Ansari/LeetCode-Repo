
class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int>ans;
        vector<pair<int,int>>v;
        //0- id  //1-rating  //2-vegan friendly  //3-price  //4-distance
        for(int i=0;i<restaurants.size();i++){
            if(veganFriendly==1){
            if(restaurants[i][2]==veganFriendly && restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                v.push_back({restaurants[i][1],restaurants[i][0]});
                }
            }
            else{
                if(restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance){
                 v.push_back({restaurants[i][1],restaurants[i][0]});
            }
        }
    }
        
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        ans.push_back(v[i].second);
    }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};




// class Solution {
// public:
//     vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
//          vector<vector<int>>arr;
//          vector<int>ans;
//         for(int i=0; i<restaurants.size(); i++){
//             arr.push_back({restaurants[i][1], restaurants[i][0], restaurants[i][2], restaurants[i][3], restaurants[i][4]});
//         }
//         sort(arr.begin(), arr.end());
        
//         if(veganFriendly==1){
//             for(int i=0; i<arr.size(); i++){
//                 if(arr[i][2]==1 && arr[i][3]<=maxPrice && arr[i][4]<=maxDistance ) ans.push_back(arr[i][1]);
//             }
//         }else{
//             for(int i=0; i<arr.size(); i++){
//                 if( arr[i][3]<=maxPrice && arr[i][4]<=maxDistance )ans.push_back(arr[i][1]);
//             }
//         }

//         reverse(ans.begin(), ans.end());        
//         return ans;
//     }
// };



