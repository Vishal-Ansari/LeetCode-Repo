class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        priority_queue<int>q;
        int i=0;
        for(i;i<h.size()-1;i++){
            if(h[i+1]<=h[i])continue;
            int d=h[i+1]-h[i];
            if(d<=bricks){
                bricks-=d;
                q.push(d);
            }
            else if(ladders>0){
                int x=q.top();
                if(x>d){
                    bricks+=x;
                    q.pop();
                    q.push(x);
                    bricks-=d;
                }
                ladders--;

            }
            else break;
        }
        return i;
    }
};
// 10 2
// 0  1 2 3 4  5  6 7 8
// 4 12 2 7 3 18 20 3 19
// 0  8 0 5 0 15 2  0  16
 // 8 5 15 2 16

// 1 5 1 2 3 4 10000
// 0 4 0 1 1 1 996
